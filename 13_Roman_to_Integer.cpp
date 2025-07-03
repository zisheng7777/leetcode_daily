class Solution {
public:
    int func(char c){
        switch(c){
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
        }    
        return 0;
    }   
    int romanToInt(string s) {
        int result = 0;
        for(int i=0; i<s.length(); i++){
            if(func(s[i]) < func(s[i+1])){
                result += -1 * func(s[i]);
            } else{
                result += func(s[i]);
            }
        }
        return result;
    }
};
