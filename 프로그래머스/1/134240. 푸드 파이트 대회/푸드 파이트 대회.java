class Solution {
    public String solution(int[] food) {
        String answer = "";
        StringBuilder sb = new StringBuilder(answer);
        
        for(int i = 1; i < food.length; i++){
            int index = sb.length() / 2;
            if(food[i] % 2 == 0){
                for(int j = 0; j < food[i]; j++){
                    sb.insert(index,i);
                }
            }
            else {
                for(int j = 0; j < food[i]-1; j++){
                    sb.insert(index,i);
                }
            }
        }
        
        sb.insert(sb.length()/2,0);
        
        answer = sb.toString();
        
        return answer;
    }
}