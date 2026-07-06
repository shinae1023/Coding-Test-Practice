class Solution {
    public boolean solution(int x) {
        int sum = 0;
        int temp = x;
        
        while(true){
            if(x < 10){
                sum += x;
                break;
            }
            sum += x%10;
            x = x/10;
        }
        
        if(temp%sum == 0){
            return true;
        }
        else return false;
    }
}