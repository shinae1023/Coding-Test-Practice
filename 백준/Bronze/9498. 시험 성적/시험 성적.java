import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        // 1. 입력을 위한 BufferedReader (Scanner보다 훨씬 빠름)
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        // 2. 출력을 한데 모으기 위한 StringBuilder (System.out.println 여러 번보다 빠름)
        StringBuilder sb = new StringBuilder();

        // 3. 첫 번째 줄 입력 받기 (예: N M)
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());

        // 4. 알고리즘 로직 작성
        Integer num = n/10;
        String result;
        switch(num){
            case 10 : 
                result = "A";
                break;
            case 9 : 
                result = "A";
                break;
            case 8 :
                result = "B";
                break;
            case 7 : 
                result = "C";
                break;
            case 6 :
                result = "D";
                break;
            default :
                result = "F";
        }

        // 5. 결과 출력
        sb.append(result).append("\n");
        System.out.print(sb);
    }
}