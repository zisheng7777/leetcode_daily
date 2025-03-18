class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        string temp = to_string(x);

        for(int i=0; i<temp.length(); i++){

            if(temp[i] != temp[temp.length()-i -1]){
                return 0;
            }
        }
        return 1;
    }
};
