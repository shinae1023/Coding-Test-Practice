import java.util.*;

class Solution {
    public long solution(long n) {
        ArrayList<Integer> arr = new ArrayList<>();
        
        while(n>0){
            arr.add((int)(n%10));
            n /= 10;
        }
        
        arr.sort(Collections.reverseOrder());
        
        String str = "";
        for(int i = 0; i < arr.size(); i++){
            str += arr.get(i);
        }
        
        long answer = Long.parseLong(str);
        return answer;
    }
}