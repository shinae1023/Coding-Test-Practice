import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        // 1. 입출력을 위한 BufferedReader, StringBuilder
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        // 2. 필요한 변수 입력받기
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken()); // 명령어의 수
        PriorityQueue<Long> maxHeap = new PriorityQueue<>(Collections.reverseOrder()); // 우선순위 큐 선언
        
        for(int i = 0; i<n; i++){
            Long num = Long.parseLong(br.readLine());
            if(num == 0 ){
                if(maxHeap.isEmpty()== true) sb.append("0\n");
                else sb.append(maxHeap.poll()).append("\n");
            }
            else{
                maxHeap.add(num);
            }
        }
        System.out.println(sb);

    }

}