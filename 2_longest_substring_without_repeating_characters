class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int table[128] = {0};
        int longest_length;
        int max;
        for (int right=0, left=0; right<s.size(); right++){
            left = [table[s[right]], left];
            max = right - left + 1;
            table[s[right]] = right + 1;
        }
        return max;
    }
};

/*
left: left pointer
right: right pointer
table: index mean char, and value mean the sequence number
*/
