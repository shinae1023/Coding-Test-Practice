class Solution {
    public int solution(int slice, int n) {
        int share = n/slice;
        int rest = n%slice;

        if(rest == 0){
	        return share;
        }
        else return share + 1;
        }
}