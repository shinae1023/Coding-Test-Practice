import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        // 1. 입출력을 위한 BufferedReader, StringBuilder
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 2. 필요한 변수 입력받기
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken()); // 나무의 갯수
        int m = Integer.parseInt(st.nextToken()); // 최소 나무 길이
        Long[] arr = new Long[n];

        // 3. 알고리즘 로직 작성
        /** think : 나무 길이가 20억까지 있으므로 일일히 비교는 불가
         * -> 이분탐색으로 범위를 좁히자 
         * 이분 탐색의 종료 조건 : 목표 값과 동일하거나 low == mid || high == mid
         */
        
        st = new StringTokenizer(br.readLine());
        Long low = Long.parseLong(st.nextToken());
        Long high = low;
        arr[0] = low;

        // 나무 길이 중 최대 최소 저장
        for(int i = 1; i<n; i++ ){
            Long tmp = Long.parseLong(st.nextToken());
            arr[i] = tmp;
            if(tmp<low) low = tmp;
            else if (tmp>high) high = tmp;
        }

        // 최적의 길이 이분 탐색
        Long result;
        while(true){
            Long mid = (high + low)/2;
            System.out.println("현재 mid = "+ mid);
            if(low == mid || high == mid){
                result = mid; break;
            }

            Long sum = 0L; // mid로 잘랐을 때 가져갈 수 있는 나무 길이
            for(int i = 0; i<n; i++){
                if(arr[i]>mid) sum += arr[i] - mid; 
            }

            System.out.println("현재 mid로 자른 나무 "+ sum);

            if(sum>m){
                low = mid + 1;
                System.out.println("현재 low = "+ low);                
            } //목표보다 더 많이 자른 경우 자르는 높이를 올려야 됨
            else if(sum < m){
                high = mid - 1;
                System.out.println("현재 high = "+ high);
            } //목표보다 더 적게 자른 경우 자르는 높이를 낮춰야 함
            else {
                result = mid; break;
            }
        }

        System.out.println(result);

    }

}