import java.util.*;

class Solution {
    public long solution(long n) {
        List<Integer> arr = new ArrayList<>();
        
        while(true){
            if(n < 10){
                arr.add((int)n);
                break;
            }
            
            arr.add((int)(n%10));
            n = n/10;
        }
        
        Collections.sort(arr,Collections.reverseOrder());
        
        String str = "";
        for(int i = 0; i < arr.size(); i++){
            str += arr.get(i);
        }
        
        long answer = Long.parseLong(str);
        return answer;
    }
}