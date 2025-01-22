class Solution {
public:
    string convert(string s, int numRows) {

        int step = 0;
        string result;

        if(numRows<=1 || (s.size()<numRows)){
            return s;
        }
        

        if(numRows>1){
            for(int step=0; step<s.size(); step+=2*(numRows-1)){ // first row
                result += s[step];
            }
            for(int i=1;i<numRows-1;i++){
                for(int step=0; step<s.length()+2*(numRows-1); step+=2*(numRows-1)){
                    if(step==0){
                        result += s[step+i];
                    } else{
                        if(step-i < s.length()){
                            result += s[step-i];
                        }
                        if(step+i < s.length()){
                            result += s[step+i];
                        }
                    }
                }
            }
            for(int step=numRows-1; step<s.length(); step+=2*(numRows-1)){
                result += s[step];
            }
        }
        
        return result;
    }
};
