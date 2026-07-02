class Solution {
    public int[] solution(int money) {
        int share = money/5500;
        int rest = money%5500;
        int[] answer = {share, rest};
        return answer;
    }
}