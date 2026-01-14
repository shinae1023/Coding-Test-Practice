import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        // 1. 입출력을 위한 BufferedReader, StringBuilder
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringBuilder sb = new StringBuilder();

        // 2. 정점의 개수 n, 간선의 개수 m
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        // 3. 알고리즘 로직 작성
        /** think : 그래프 저장 - ArrayList로 양방향 저장
         * isVisit으로 방문 여부 확인 false면 +1
         * 연결 방문지 다 저장
          */
        
        // 4. 그래프 저장
        ArrayList<Integer>[] adj = new ArrayList[n+1]; // 인접 리스트 사용
        boolean[] isVisit = new boolean[n+1]; //방문 여부
        Queue<Integer> queue = new ArrayDeque<>(); // 방문에 사용

        for (int i = 1; i <= n; i++) {
            adj[i] = new ArrayList<>();
        }   

        for (int i= 1; i <= m ; i++){ 
            st = new StringTokenizer(br.readLine());
            int start = Integer.parseInt(st.nextToken());
            int end = Integer.parseInt(st.nextToken());
            adj[start].add(end); adj[end].add(start);
        }

        // 5. bfs 
        int compo = 0;
        for (int i = 1; i <= n; i++) {
            if (!isVisit[i]) {
                compo++;
                queue.offer(i);
                isVisit[i] = true; // 넣자마자 체크!

                while (!queue.isEmpty()) {
                    int curr = queue.poll();

                    for (int neighbor : adj[curr]) {
                        if (!isVisit[neighbor]) {
                            isVisit[neighbor] = true; // 넣자마자 체크!
                            queue.offer(neighbor);
                        }       
                    }
                }
            }
        }
        // 6. 결과 출력
        System.out.print(compo);
    }

}