import java.util.*;

public class Solution {
    public Deque<Integer> solution(int []arr) {
        Deque<Integer> answer = new ArrayDeque<>();

        answer.add(arr[0]);
        
        for(int i = 1; i < arr.length; i++){
            if(arr[i-1]!=arr[i]){
                answer.add(arr[i]);  
            }

        }
        
        return answer;
    }
}