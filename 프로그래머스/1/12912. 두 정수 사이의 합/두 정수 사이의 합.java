class Solution {
    public long solution(int a, int b) {
        long answer = 0;
        int small, big = 0;
        
        //a와 b가 같을 땐 a 리턴
        if (a == b){
            return a;
        }
        else if (a>b){ // a > b인 경우 대소 관계 저장
            small = b;
            big = a;
        }
        else { // a < b인 경우 대소 관계 저장
            small = a;
            big = b;
        }
        
        for (int i = small; i <= big; i++){
            answer += i;
        }
        return answer;
    }
}