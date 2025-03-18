class Solution {
public:
    bool isMatch(string s, string p) {
        size_t head = 0, i = 0;
        while (true) {
            if (i == p.size()) {
                return head == s.size();
            }

            bool firstMatch = (head < s.size() && (s[head] == p[i] || p[i] == '.'));

            if (i + 1 < p.size() && p[i + 1] == '*') {

                if (isMatch(s.substr(head), p.substr(i + 2))) return true;
                if (firstMatch) {
                    head++;
                    continue;
                }
                return false;
            }

            if (!firstMatch) return false;
            head++;
            i++;
        }
    }
};
