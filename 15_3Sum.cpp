class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> uniqueResult;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for (int i=0; i<n-2; i++) {
            for (int j=i+1; j<n-1; j++) {
                for (int k=j+1; k<n; k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        sort(triplet.begin(), triplet.end());
                        uniqueResult.insert(triplet);
                    }
                }
            }
        }

        return vector<vector<int>>(uniqueResult.begin(), uniqueResult.end());
    }
};
