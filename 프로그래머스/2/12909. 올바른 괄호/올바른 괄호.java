import java.util.*;

class Solution {
    boolean solution(String s) {
        Deque<Character> q = new ArrayDeque<>();
        
        if(s.charAt(0) != ')') q.push(s.charAt(0));
        else return false;
        
        for(int i = 1; i < s.length(); i++){
            if(q.isEmpty()) q.push(s.charAt(i));
            else if(s.charAt(i) == ')' && q.peek() == '('){
                q.pop();
            }
            else q.push(s.charAt(i));
        }
        
        return q.isEmpty();
    }
}