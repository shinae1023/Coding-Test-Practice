class Solution {
    public String solution(String s) {
        String answer = "";
        int index = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == ' ') {
                index = i+1;
                answer += ' ';
            }
            else if((i-index) % 2 == 0){
                answer += Character.toUpperCase(s.charAt(i));
            }
            else answer += Character.toLowerCase(s.charAt(i));
        }
        
        return answer;
    }
}