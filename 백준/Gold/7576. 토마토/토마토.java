import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken()); // 가로
        int m = Integer.parseInt(st.nextToken()); // 세로

        int[] arr = new int[n * m];
        Queue<Integer> queue = new ArrayDeque<>();
        int zeroCount = 0; // 익지 않은 토마토(0)의 개수 파악용

        // 1. 배열 저장 및 초기 익은 토마토 큐에 삽입
        for (int i = 0; i < m; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < n; j++) {
                int idx = i * n + j;
                arr[idx] = Integer.parseInt(st.nextToken());
                
                if (arr[idx] == 1) {
                    queue.offer(idx); // 익은 토마토 위치를 큐에 다 넣음
                } else if (arr[idx] == 0) {
                    zeroCount++; // 익지 않은 토마토 개수 카운트
                }
            }
        }

        // 처음부터 다 익어있는 경우
        if (zeroCount == 0) {
            System.out.println(0);
            return;
        }

        // 2. BFS 탐색
        int day = 0;
        // 상하좌우 이동을 위한 배열 (1차원 인덱스 계산용)
        int[] dr = {-n, n, -1, 1}; 

        while (!queue.isEmpty()) {
            int size = queue.size(); // 현재 날짜에 익히기를 시작할 토마토 개수 고정
            boolean spread = false;

            for (int i = 0; i < size; i++) {
                int curr = queue.poll();

                // 상하좌우 체크
                for (int d = 0; d < 4; d++) {
                    int next = curr + dr[d];
                    
                    // 1차원 배열에서 범위를 벗어나는지 체크하는 로직
                    if (d == 0 && curr / n == 0) continue; // 위로 못 감
                    if (d == 1 && curr / n == m - 1) continue; // 아래로 못 감
                    if (d == 2 && curr % n == 0) continue; // 왼쪽으로 못 감
                    if (d == 3 && curr % n == n - 1) continue; // 오른쪽으로 못 감

                    // 주변에 안 익은 토마토가 있다면
                    if (next >= 0 && next < n * m && arr[next] == 0) {
                        arr[next] = 1; // 익게 만듦
                        queue.offer(next); // 다음 날 주변을 익힐 후보로 추가
                        zeroCount--; // 안 익은 토마토 감소
                        spread = true;
                    }
                }
            }

            if (spread) day++; // 이번 턴에 토마토가 하나라도 익었다면 하루 증가
        }

        // 3. 결과 출력
        if (zeroCount > 0) {
            System.out.println(-1); // 다 안 익었는데 큐가 비었으면 불가능한 경우
        } else {
            System.out.println(day);
        }
    }
}