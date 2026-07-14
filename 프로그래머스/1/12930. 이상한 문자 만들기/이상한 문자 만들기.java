class Solution {
    public String solution(String s) {
        int index = 0;
        String answer = "";
        for(int i = 0;  answer.length() != s.length(); i++){
            if(s.charAt(i) == ' '){
                index = i+1;
                answer += s.charAt(i);
            }
            else if((i - index) % 2 == 0){
                answer += Character.toUpperCase(s.charAt(i));
            }
            else answer += Character.toLowerCase(s.charAt(i));
        }
        return answer;
    }
}