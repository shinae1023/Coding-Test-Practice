import java.util.*;

class Solution {
    public int solution(int[] d, int budget) {
        int answer = 0;
        int sum = 0;
        Arrays.sort(d);
        
        for(int i = 0; i < d.length; i++){
            if(budget >= d[i]){
                budget -= d[i];
                answer++;
                continue;
            }
            break;
        }
        return answer;
    }
}