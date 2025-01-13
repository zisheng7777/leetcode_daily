#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // std::cout << nums.size() << std::endl;
        std::vector<int> result;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j]) == target){
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
    Solution(){
        std::cout << "class Solution constructed" << std::endl;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums = {3, 2, 4};
    int target = 6;
    std::vector<int> result = solution.twoSum(nums, target);
    std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
    return 0;
}