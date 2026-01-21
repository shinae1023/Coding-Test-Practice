import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        // 1. 입출력을 위한 BufferedReader, StringBuilder
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        // 2. 필요한 변수 입력받기
        int n = Integer.parseInt(br.readLine()); // 명령어의 수
        PriorityQueue<Long> absHeap = new PriorityQueue<>((a,b) -> {
            long absA = Math.abs(a); //절댓값으로 변환
            long absB = Math.abs(b);

            if(absA == absB){ //절댓값이 같으면 
                return Long.compare(a, b); //실제 값이 작은 순서대로 저장
            }
            else{ //절댓값이 다르면 절댓값이 작은 순서대로 저장
                return Long.compare(absA, absB);
            }
        }); // 우선순위 큐 선언
        
        for(int i = 0; i<n; i++){
            long num = Long.parseLong(br.readLine());
            if(num == 0 ){
                if(absHeap.isEmpty()== true) sb.append(0).append("\n");
                else sb.append(absHeap.poll()).append("\n");
            }
            else{
                absHeap.add(num);
            }
        }
        System.out.println(sb);
    }

}