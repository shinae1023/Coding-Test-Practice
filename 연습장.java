import java.util.*;
import java.io.*;

class Main {
    //1074 Z
    static int n,c,r = 0;
    static int count = 0;
    static int[][] arr;
    public static void main(String[] args) throws IOException {
        // 1. 입출력을 위한 BufferedReader, StringBuilder
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        // 2. 필요한 변수 입력받기
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        c = Integer.parseInt(st.nextToken());
        r = Integer.parseInt(st.nextToken());

        n = (int) Math.pow(2, n);

        // 3. 2차원 배열 생성
        arr = new int[n][n];

        // 4. 알고리즘 작성
        /**
         * 분할 정복
         * 
         */
        cnt(n,0,0);

        System.out.println(arr[c][r]);
    }
 
    public static void cnt(int size, int x, int y){
        while(size>2){
            size = size/2;
            cnt(size,x,y);
            cnt(size,x,y+size);
            cnt(size,x+size,y);
            cnt(size,x+size,y+size);
            return;
        }

        arr[x][y] = count; count++;
        arr[x][y+1] = count; count++;
        arr[x+1][y] = count; count++;
        arr[x+1][y+1] = count; count++;
    }
}

