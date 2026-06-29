import java.io.*;
import java.util.*;

class Solution {
    public int solution(int[] array) {
        Arrays.sort(array);
        int cnt = 1; //현재 수 지속 카운트
        int max = 0; //최빈 값 지속 카운트
        int answer = array[0]; // 최빈값
        
        for (int i = 1; i < array.length; i++){
            if (array[i-1]==array[i]){
                cnt ++;
            }
            else {
                cnt = 1;
            }
            
            if (cnt > max){
                max = cnt;
                answer = array[i];
            }
            else if (cnt == max){
                answer = -1;
            }
        }
        return answer;
    }
}