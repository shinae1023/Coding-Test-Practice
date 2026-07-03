import java.util.*;
import java.io.*;

class Solution {
    public List<Long> solution(long n) {
        List<Long> arr = new ArrayList<>();
        
        while(true){
            if(n < 10){
                arr.add(n);
                break;
            }
            arr.add(n%10);
            n = n/10;
        }
        
        return arr;
    }
}