import java.util.*;

class Solution {
    public long solution(int n) {
        long a = 0L; long b = 1L;
        long sum = 0;
        if(n == 0) return 0;
        else if (n == 1) return 1;
        
        for(int i = 2; i <= n; i++){
            sum = (a+b) % 1234567;
            a = b;
            b = sum;
        }
        
        return sum;
    }
}