import java.util.*;

class Solution {
    public ArrayList<Long> solution(int x, int n) {
        ArrayList<Long> answer = new ArrayList<>();
        long i = x;
        
        while (answer.size() < n){
            answer.add(i);
            i += x;
        }
        return answer;
    }
}