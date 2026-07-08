class Solution {
    
    //최대공약수 구하는 알고리즘
    public int getGCD(int a, int b){
        while(b>0){
            int temp = a%b; //나머지 저장
            a = b; // a에 b를 저장
            b = temp; // b에 나머지 저장
        }
        return a; // b가 0일때의 a를 return
    }
    
    public int solution(int n) {
        int answer = 0;
        answer = getGCD(n,6); //최대공약수
        answer = n*6/answer; //최소공배수 (= 두수의 곱을 최대공약수로 나눈 것) -> 피자 조각수
        answer /= 6; //피자 한 판은 6조각이므로 6으로 나누어 피자 판 수 구함
        return answer;
    }
}