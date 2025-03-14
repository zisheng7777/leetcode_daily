class Solution {
public:
    int myAtoi(string s) {
        bool sign = true;
        long ans = 0;
        int idx = 0;
        bool value = false;
        for(int i=0; i<s.length(); i++){

            if(value == true && !isdigit(s[i])){
                return ans;
            } else if(s[i] != ' ' && s[i] != '+' && s[i] != '-' && !isdigit(s[i])){
                return ans;
            } else if(s[i] == ' '){
                continue;
            } else if(isdigit(s[i])){
                value = true;
                ans = ans * 10;
                if(sign){
                    ans = ans + (s[i] - '0');
                } else {
                    ans = ans - (s[i] - '0');
                }
                if(ans >= INT_MAX || ans <= INT_MIN){
                    return sign ? INT_MAX : INT_MIN;
                }
            } else if(!isdigit(s[i])){
                value = true;
                if(s[i] == '-'){
                    sign = false;
                } else{
                    sign = true;
                }
            }
        }
        return ans;

    }
};
