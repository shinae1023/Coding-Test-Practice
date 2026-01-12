import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        // 1. 입력을 위한 BufferedReader (Scanner보다 훨씬 빠름)
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        // 2. 출력을 한데 모으기 위한 StringBuilder (System.out.println 여러 번보다 빠름)
        StringBuilder sb = new StringBuilder();

        // 3. 첫 번째 줄 입력 받기
        int n = Integer.parseInt(br.readLine());

        // 4. 두 번째 줄 입력 받기
        String s = br.readLine();

        // 5. 알고리즘 로직 작성
        long sum = 0;
        for(int i = 0; i < n; i++){
            // charAt(i)로 문자를 가져온 뒤, '0'의 아스키 값을 빼주면 실제 숫자가 됨
            sum += s.charAt(i) - '0';
        }   

        // 6. 결과 출력
        sb.append(sum).append("\n");
        System.out.print(sb);
    }
}