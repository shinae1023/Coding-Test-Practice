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
        Deque<Integer> stack = new ArrayDeque<>(); // 스택 선언
        
        for(int i = 0; i<n; i++){
            st = new StringTokenizer(br.readLine());
            String command = st.nextToken();
            if(command.equals("push")){
                int num = Integer.parseInt(st.nextToken());
                stack.push(num);
            }
            else if (command.equals("pop")){
                if(!stack.isEmpty()){
                    sb.append(stack.pop()).append("\n");
                }
                else sb.append("-1\n");
            }
            else if (command.equals("size")){
                sb.append(stack.size()).append("\n");
            }
            else if(command.equals("empty")){
                if(!stack.isEmpty()) sb.append("0\n");
                else sb.append("1\n");
            }
            else{
                if(!stack.isEmpty()){
                    sb.append(stack.peek()).append("\n");
                }
                else sb.append("-1\n");
            }
        }
        System.out.println(sb);

    }

}