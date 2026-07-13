import java.util.*;

class Solution {
    public int solution(String t, String p) {
        int answer = 0;
        int size = t.length() - p.length();
        long pNum = Long.parseLong(p);
        ArrayList<String> str = new ArrayList<>();
        
        for(int i = 0; i <= size; i++){
            str.add(t.substring(i,i+p.length()));
        }
        
        for(int i = 0; i < str.size(); i++){
            if(pNum >= Long.parseLong(str.get(i))){
                answer++;
            }
        }
        
        return answer;
    }
}