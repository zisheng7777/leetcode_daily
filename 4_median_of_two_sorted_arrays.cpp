class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sum;
        sum.insert(sum.end(), nums1.begin(), nums1.end());
        sum.insert(sum.end(), nums2.begin(), nums2.end());
        sort(sum.begin(), sum.end());
        if(sum.size()%2){
            return (sum[sum.size()/2]);
        } else{
            return (sum[sum.size()/2 -1] + sum[sum.size()/2]) /2.0;
        }
    }

};
