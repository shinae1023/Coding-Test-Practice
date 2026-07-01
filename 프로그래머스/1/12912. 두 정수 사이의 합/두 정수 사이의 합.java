class Solution {
    public long solution(int a, int b) {
        long answer = 0;
        int small, big, abs = 0;
        
        if (a == b){
            return a;
        }
        else if (a>b){
            small = b;
            big = a;
            abs = a-b;
        }
        else {
            small = a;
            big = b;
            abs = b-a;
        }
        
        for (int i = small; i <= big; i++){
            answer += i;
        }
        return answer;
    }
}