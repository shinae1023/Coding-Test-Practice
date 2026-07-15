class Solution {
    public int solution(int n) {
        String reverse = "";
        while(n > 0){
            reverse += n%3;
            n /= 3;
        }
        
        Long num = Long.parseLong(reverse);
        
        int answer = 0;
        int i = 0;
        
        while(num > 0){
            answer += (num%10) * Math.pow(3,i);
            i++;
            num /= 10;
        }
        
        return answer;
    }
}