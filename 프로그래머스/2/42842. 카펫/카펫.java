class Solution {
    public int[] solution(int brown, int yellow) {
        int w,h;
        int a = (brown + 4) / 2;
        w = a - 3; h = 3;
        
        while(true){
            if(yellow == (w-2) * (h-2)){
                break;
            }
            w--; h++;
        }
        
        int[] answer = {w,h};
        return answer;
    }
}