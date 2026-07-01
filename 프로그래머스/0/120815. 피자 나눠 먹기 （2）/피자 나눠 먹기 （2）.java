class Solution {
        public int getGcd(int a, int b){
	    while (b > 0){
		    int temp = a % b;
		    a = b;
		    b = temp;
		    }
	    return a;
    }

    public int getLcm(int a, int b){
	    int gcd = getGcd(a,b);
	    return a*b / gcd;
    }
    
    public int solution(int n) {
        int answer = getLcm(n,6) / 6;
        return answer;
    }

}