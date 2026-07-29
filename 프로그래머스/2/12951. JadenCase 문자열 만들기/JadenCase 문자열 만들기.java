import java.util.*;

class Solution {
    public String solution(String s) {
        String answer = "";
        boolean isFirst = true;
        
        for(int i = 0; i < s.length(); i++){
            char c = s.charAt(i);
            
            if(c == ' '){
                isFirst = true;
                answer += c;
                continue;
            }
            
            if(isFirst){
                c = Character.toUpperCase(c);
                isFirst = false;
            }
            else{
                c = Character.toLowerCase(c);
            }
            
            answer += c;
        }
        
        return answer;
    }
}