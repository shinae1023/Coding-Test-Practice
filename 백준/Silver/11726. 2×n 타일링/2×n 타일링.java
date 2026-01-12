import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        // 1. 입력을 위한 BufferedReader (Scanner보다 훨씬 빠름)
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 2. n (가로 크기) 입력 받기
        int n = Integer.parseInt(br.readLine());

        // 3. 알고리즘 로직 작성
        /** think : 1) 세로 블럭을 두는 경우 2*n-1 수행, 2) 가로 블럭을 두는 경우 2*n-2 수행
         * n=1 1, n=2 2,
         * n = 3 111 12 21 3 / n = 4 1111 112 121 211 22  5/
         * n = 5 11111 1112 1121 1211 2111 221 121 122 8/ n = 6 111111 
         * -> 피보나치
          */
        int[] arr = new int[1001];
        arr[1]=1; arr[2]  = 2;
        for(int i=3; i<=n; i++){
            arr[i] = (arr[i-1] + arr[i-2])%10007;
        }
        int result = arr[n] ;

        // 4. 결과 출력
        System.out.print(result);
    }
}