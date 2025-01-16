class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int table[128] = {0};
        int longest_length;
        int max_length;
        for (int right=0, left=0; right<s.size(); right++){
            left = max[table[s[right]], left];
            max_length = right - left + 1;
            table[s[right]] = right + 1;
        }
        return max_length;
    }
};

/*
left: left pointer
right: right pointer
table: index mean char, and value mean the sequence number
*/
