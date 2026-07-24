import java.util.*;

class Solution {
    public String solution(String s) {
        String answer = "";
        StringBuilder sb = new StringBuilder();
        Boolean isFirst = true;
        
        for(int i = 0; i < s.length(); i++){
            char c = s.charAt(i);
            
            if(c == ' '){
                answer += c;
                isFirst = true;
            }
            else{
                if(isFirst){
                    c = Character.toUpperCase(c);
                    isFirst = false;
                }
                else c = Character.toLowerCase(c);
                answer += c;
            }
        }
        return answer;
    }
}