import java.util.*;

class Solution {
    public int solution(String s) {
        int answer = 0;
        String temp = "";
        int i = 0;
        
        while(i < s.length()){
            if(Character.isDigit(s.charAt(i))){
                temp += s.charAt(i);
                i++;
            }
            else{
                String twoLetter = s.substring(i,i+2);
                switch(twoLetter){
                    case "ze" :
                        temp+=0;
                        i += 4;
                        break;
                    case "on" :
                        temp += 1;
                        i += 3;
                        break;
                    case "tw" :
                        temp += 2;
                        i += 3;
                        break;
                        
                    case "th" :
                        temp += 3;
                        i+=5;
                        break;
                    case "fo" :
                        temp += 4;
                        i+=4;
                        break;
                    case "fi" :
                        temp += 5;
                        i+=4;
                        break;
                    case "si" :
                        temp += 6;
                        i+=3;
                        break;
                    case "se" :
                        temp += 7;
                        i+=5;
                        break;
                    case "ei" :
                        temp += 8;
                        i+= 5;
                        break;
                    case "ni" :
                        temp += 9;
                        i+=4;
                        break;
                    default :
                        temp += s.charAt(i);
                        i++;
                }
            }
        }
        
        answer = Integer.parseInt(temp);
        return answer;
    }
}