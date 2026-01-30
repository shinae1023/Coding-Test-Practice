import java.util.*;
import java.io.*;

class Main {
    //1074 Z
    static int n,c,r = 0;
    static int count = 0;

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

        // 4. 알고리즘 작성
        /**
         * 분할 정복
         * 
         */
        cnt(n,c,r);
    }
 
    public static void cnt(int size, int x, int y){

        if(size == 1){
            System.out.println(count);
            return;
        }

        int area = (size * size)/4;
        int half = size/2;
        //사분면 판정
        if(x<half && y<half){
            cnt(half,x,y);
        }
        else if(x<half && y>=half){
            count = count+area;
            cnt(half,x,y-half);
        }
        else if(x>half && y<half){
            count = count + area*2;
            cnt(half,x-half,y);
        }
        else{
            count = count + area*3;
            cnt(half,x-half,y-half);
        }
    }
}

