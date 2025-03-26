class Solution {
public:
    string intToRoman(int num) {
        int M = 1000;
        int D = 500;
        int C = 100;
        int L = 50;
        int X = 10;
        int V = 5;
        int I = 1;
        int value = num;
        string ans;
        
        while(value>=M){
            value = value - M;
            ans.append("M");
        }
        value = func(&ans, M, D, C, "M", "D", "C", 900, value, 400);
        value = func(&ans, C, L, X, "C", "L", "X", 90, value, 40);
        value = func(&ans, X, V, I, "X", "V", "I", 9, value, 4);
        return ans;
    }
    int func(string* ans, int M, int D, int C, char *char_M, char *char_D, char *char_C, int bound, int value, int bound_2){
        if(value >= D && value < bound){
            value = value - D;
            ans->append(char_D);
            while(value>=C){
                value = value - C;
                ans->append(char_C);
            }
        } 
        else if(value >= bound){
            while(value<M){
                value = value + C;
                ans->append(char_C);
            }
            value = value - M;
            ans->append(char_M);
        } 
        else if (value <= D && value >= bound_2){
            while(value<D){
                value = value + C;
                ans->append(char_C);
            }
            value = value -D;
            ans->append(char_D);
        } 
        else if (value <= D && value < bound_2 && value >= C){
            while(value>=C){
                value = value - C;
                ans->append(char_C);
            }
        }
        return value;
    }
};
