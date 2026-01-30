import java.util.*;
import java.io.*;

class Main {
    //1931 회의실 배정
    public static void main(String[] args) throws IOException {
        // 1. 입출력을 위한 BufferedReader, StringBuilder
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        // 2. 필요한 변수 입력받기
        int n = Integer.parseInt(br.readLine());

        // 회의 배열 생성 및 시간 입력 받기
        Meeting[] meets = new Meeting[n];
        for(int i=0; i<n; i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int start = Integer.parseInt(st.nextToken());
            int end = Integer.parseInt(st.nextToken());

            meets[i] = new Meeting(start,end);
        }

        // 4. 알고리즘 작성
        /**
         * 그리디 알고리즘
         * 정렬 기준
         * 1순위 : 회의가 빨리 끝나는 순서
         * 2순위 : 회의가 빨리 시작하는 순서
         */

        //회의시간 정렬
        Arrays.sort(meets,(o1,o2) -> {
            if(o1.end==o2.end){
                return o1.start-o2.start;
            }
            return o1.end - o2.end;
        });
        
        // 회의 순회
        int endTime = meets[0].end; //이전 회의 끝나는 시각
        int count = 1; //총 가능 회의 수
        for(int  i = 1; i<n; i++){
            if(meets[i].start >= endTime){
                endTime = meets[i].end;
                count++;
            }
        }

        System.out.println(count);
    }
 
    static class Meeting {
        int start, end;

        //생성자
        Meeting(int start, int end) {
            this.start = start;
            this.end = end;
        }
    }
}

