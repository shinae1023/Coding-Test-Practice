import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        // 1. 입출력을 위한 BufferedReader, StringBuilder
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringBuilder sb = new StringBuilder();

        // 2. 필요한 변수 입력받기
        StringTokenizer st = new StringTokenizer(br.readLine());
        int t = Integer.parseInt(st.nextToken()); // 테스트케이스 갯수

        // 3. 알고리즘 로직 작성
        /** think : 그래프 저장 - 2차원 배열로 저장
         * isVisit으로 방문 여부 확인 false면 +1
         * 연결 방문지 큐에 넣으며 방문
          */
        
        for(;t>0;t--){
            
            // 4. 그래프 저장
            st = new StringTokenizer(br.readLine());
            int m = Integer.parseInt(st.nextToken()); //열의 갯수
            int n = Integer.parseInt(st.nextToken()); //행의 갯수
            int k = Integer.parseInt(st.nextToken()); //배추 위치
            int x,y  = 0;
            
            int[][] arr = new int[n][m];
            boolean[][] isVisit = new boolean[n][m]; //방문 여부 
            int compo = 0;
            Queue<int[]> queue = new LinkedList<>();

            for (int i = 0; i < k; i++) {
                st = new StringTokenizer(br.readLine());
                x = Integer.parseInt(st.nextToken());
                y = Integer.parseInt(st.nextToken());
                arr[y][x] = 1;
            }   

            // 5. bfs
            for (int i = 0; i < n; i++) {
                for(int j = 0; j<m; j++){
                    if(!isVisit[i][j] && arr[i][j]==1){
                        compo++;
                        queue.offer(new int[]{i,j});
                        isVisit[i][j] = true;

                        while(!queue.isEmpty()){
                            int[] curr = queue.poll();
                            x = curr[0];
                            y = curr[1];
               
                            //위
                            if(x!=0) {
                                if(arr[x-1][y] == 1 && isVisit[x-1][y] == false){
                                    queue.offer(new int[]{x-1,y});
                                    isVisit[x-1][y] =true;
                                }
                            }
                            //아래
                            if(x!=n-1){
                                if(arr[x+1][y] == 1 && isVisit[x+1][y] == false){
                                    queue.offer(new int[]{x+1,y});
                                    isVisit[x+1][y] = true;                         
                                }
                            }
                            //좌
                            if(y!=0){
                                if(arr[x][y-1]==1 && isVisit[x][y-1]==false){
                                    queue.offer(new int[]{x,y-1});
                                    isVisit[x][y-1] = true;
                                }
                            }
                            if(y!=m-1){
                                if(arr[x][y+1]==1 && isVisit[x][y+1]==false){
                                    queue.offer(new int[]{x,y+1});
                                    isVisit[x][y+1] = true;
                                }
                            }
                        } 
                    }
                }
            }
            // 6. 결과 출력
            System.out.print(compo+"\n");
        }

    }

}