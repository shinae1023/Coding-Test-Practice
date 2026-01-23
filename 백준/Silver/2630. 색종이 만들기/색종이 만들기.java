import java.util.*;
import java.io.*;

class Main {
    //2630 색종이 만들기
    static int white = 0;
    static int blue = 0;
    static int[][] arr;

    public static void main(String[] args) throws IOException {
        // 1. 입출력을 위한 BufferedReader, StringBuilder
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        // 2. 필요한 변수 입력받기
        int n = Integer.parseInt(br.readLine());

        arr = new int[n][n];

        // 3. 2차원 배열 생성 및 입력 받기
        for(int i=0; i<n; i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            for(int j=0; j<n; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        // 4. 알고리즘 작성
        /**
         * 시작 지점 맨 위 왼쪽, 끝 아래 오른쪽
         * 색깔 같은지 체크 하다가 다르면 그 지점부터 재귀호출
         * 사이즈는 n/2로 줄임
         */

        countColor(n,0,0);

        System.out.println(white);
        System.out.println(blue);
    }

    public static void countColor(int size, int x, int y){
        int color = arr[x][y];

        for(int i = x; i<x+size; i++){
            for (int j = y; j<y+size; j++){
                if(color != arr[i][j]){
                    int half = size/2;
                    countColor(half,x,y);
                    countColor(half,x+half,y);
                    countColor(half,x,y+half);
                    countColor(half,x+half,y+half);
                    return ;
                }
            }
        }

        if(color == 1) blue++;
        else white++;
    }

}