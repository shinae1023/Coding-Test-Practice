import java.util.*;

class Solution {
    public Long solution(int n) {
        Long answer = 0L;
        ArrayList<Long> arr = new ArrayList<>();
        arr.add(0L); arr.add(1L);
        
        for(int i = 2; i <= n; i++){
            arr.add((arr.get(i-2) + arr.get(i-1))%1234567);
        }
        
        answer = arr.get(n);
        return answer;
    }
}