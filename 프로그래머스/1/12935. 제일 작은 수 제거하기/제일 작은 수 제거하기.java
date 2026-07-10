import java.util.*;

class Solution {
    public ArrayList<Integer> solution(int[] arr) {
        ArrayList<Integer> answer = new ArrayList<>();
        if(arr.length == 1){
            answer.add(-1);
            return answer;
        }
        
        int min = arr[0];
        int minIndex = 0;
        for(int i = 1; i < arr.length; i++){
            if(min > arr[i]) {
                min = arr[i];
                minIndex = i;
            }
        }
        
        for(int i = 0; i < arr.length; i++){
            if(i == minIndex){
                continue;
            }
            answer.add(arr[i]);
        }
        
        return answer;
    }
}