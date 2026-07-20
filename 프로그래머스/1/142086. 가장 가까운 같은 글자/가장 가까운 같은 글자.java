import java.util.*;

class Solution {
    public ArrayList<Integer> solution(String s) {
        ArrayList<Integer> answer = new ArrayList<>();
        HashMap<Character, Integer> map = new HashMap<>();
        
        for(int i = 0; i < s.length(); i++){
            if(map.containsKey(s.charAt(i))){ //앞에 나왔던 글자인 경우
                answer.add(i - map.get(s.charAt(i))); //정답 배열에 인덱스 차이 입력
                map.put(s.charAt(i),i); //새로운 인덱스로 갱신
            }
            else{ //앞에 나오지 않은 글자인 경우
                map.put(s.charAt(i),i); //새로운 인덱스 갱신
                answer.add(-1); //처음 나왔으므로 정답 배열에 -1
            }
        }
        
        return answer;
    }
}