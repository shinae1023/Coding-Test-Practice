class Solution {
    public int solution(int n) {
        int answer = 0;
        String s = "";
        
        //3진법 변환
        while (n>0){
            s += n%3;
            n /= 3;
        }
        System.out.println(s);

        Long reverse = Long.parseLong(s);
        int i = 0;
        
        while(reverse > 0){
            answer += (reverse % 10) * (int)Math.pow(3,i);
            reverse /= 10;
            i++;
        }
        
        return answer;
    }
}