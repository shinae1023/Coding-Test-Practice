import java.util.*;

class Solution
{
    public int solution(String s)
    {
        Deque<Character> q = new ArrayDeque<>();
        q.push(s.charAt(0));

        for(int i = 1; i < s.length(); i++){
            if(!q.isEmpty() && q.peek() == s.charAt(i)){
                q.pop();
            }
            else{
                q.push(s.charAt(i));
            }
        }
        
        if(q.isEmpty()) return 1;
        else return 0;
    }
}