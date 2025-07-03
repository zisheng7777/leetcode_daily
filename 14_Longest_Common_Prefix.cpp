class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        if(strs.size() == 0){
            return "";
        }
        char temp;
        int j = 0;
        while(strs[0][j]!=NULL){
            temp = strs[0][j];
            for(int i=0; i<strs.size(); i++){
                std::cout << temp << std::endl;
                if(strs[i] == ""){
                    return result;
                }
                if(strs[i][j] != temp){
                    return result;
                }
            }
            result = result + temp;
            j++;
        }
        return result;
    }
};
