class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int length = 1;
        for(int win=s.size(); win>1; win--){
            for(int i=0; i<=s.size()-win; i++){
                if(palindrome(i, win+i, s)){
                    return s.substr(i, win);
                }
            }
        }
        return s.substr(0, 1);
    }

    bool palindrome(int start, int win, string& s){
        int end = win-1;
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            } else{
                start++;
                end--;
            }
        }
        return true;
    }
};
