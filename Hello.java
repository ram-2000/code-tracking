class Solution {
    public int isPrefixOfWord(String sentence, String searchWord) {
        String[] words = sentence.split(" ");
        int count =0;
        for(String word: words){
            count++;
            if(word.indexOf(searchWord)==0){
                return count;
            }
        }
        return -1;
    }
}