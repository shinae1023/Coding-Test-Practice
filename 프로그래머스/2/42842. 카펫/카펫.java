import java.util.*;

// 8 * 6 (갈 24/ 노 24) - 둘레가 28 (14) 경우의 수 11/3 (노란색의 수가 가로 -2 * 세로 -2) = 9 , (10,4) 8*2 = 16 , (9,5) 7*3 = 21, (8,6) = 6*4 =24 
//(갈색 + 4) /2 로 둘레를 구하고 3이상부터 늘이고 줄이고 해서 노란색이랑 맞는지 확인

class Solution {
    public int[] solution(int brown, int yellow) {
        int w,h;
        int circum = (brown + 4) / 2;
        w = circum - 3; h = 3;
        
        while(true){
            int y = (w-2) * (h-2);
            if(y == yellow) break;
            w--; h++;
        }
        
        int[] answer = {w,h};
        return answer;
    }
}