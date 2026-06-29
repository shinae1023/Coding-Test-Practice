import java.io.*;
import java.util.*;

class Solution {
    public int[] solution(int n) {
        int size = 0;
        if (n%2 == 0){
            size = n/2;
        }
        else {
            size = n/2 + 1;
        }
        
        int answer[] = new int[size];
        for(int i = 0, j = 1; i < size; i++, j+=2){
            answer[i] = j;
        }
        return answer;
    }
}