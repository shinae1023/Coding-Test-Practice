import java.util.*;

class Solution {
    public String solution(String s, int n) {
        String answer = "";
        
        for(int i = 0; i < s.length(); i++){
            char temp = s.charAt(i);
            if(temp == ' ') answer += ' '; //공백인 경우
            else if('a' <= temp && temp <= 'z'){ //소문자인 경우
                if(Character.isAlphabetic((char)(temp + n))){
                    answer += (char)(temp + n);
                }
                else answer += (char)(temp + n -26);
            }
            else if('A' <= temp + n && temp + n <= 'Z'){ //n 더해도 대문자
                answer += (char)(temp + n);
            }
            else answer += (char)(temp + n - 26); //n 더하면 다른 문자
        }
        
        return answer;
    }
}