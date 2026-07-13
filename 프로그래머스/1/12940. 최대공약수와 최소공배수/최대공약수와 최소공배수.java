class Solution {
    public int[] solution(int n, int m) {
        int gcd, lcm = n*m;
        
        while(m != 0){
            int temp = n%m;
            n = m;
            m = temp;
        }
        gcd = n; 
        lcm /= gcd;
        
        
        int[] answer = {gcd, lcm};
        return answer;
    }
}