import java.util.*;
import java.io.*;

<<<<<<< HEAD
class Main {
    public static void main(String[] args) throws IOException {
        // 1. 입력을 위한 BufferedReader (Scanner보다 훨씬 빠름)
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        // 2. 출력을 한데 모으기 위한 StringBuilder (System.out.println 여러 번보다 빠름)
        StringBuilder sb = new StringBuilder();

        // 3. 테스트 케이스 수 입력 받기
        int n = Integer.parseInt(br.readLine());
        if (n==0) {System.out.println(0); return;}

        for(int i = 0; i < n; i++){
            // 4. 의상의 수 입력 받기 & 필요 변수 생성 및 초기화
            int m = Integer.parseInt(br.readLine());
            HashMap<String, Integer> map = new HashMap<>();
            int result = 1;

            for(int j=0; j<m; j++){
                // 5. 알고리즘 작성
                /**think : 
                 *  HashMap<String, Integer>으로 저장
                 * -> 정수형으로 종류 당 몇개 있는지 count
                 * -> result = count+1들의 곱 */ 
                StringTokenizer st = new StringTokenizer(br.readLine());
                String name = st.nextToken(); 
                String type = st.nextToken();
                map.put(type, map.getOrDefault(type, 0) + 1);
            }

            for (int count : map.values()) {
                result *= (count + 1);
            }

            result -= 1;

            // 6. 각 출력값 String Builder에 저장
            sb.append(result).append("\n");
        } 

        // 7. 결과 출력
        System.out.print(sb);
    }
}