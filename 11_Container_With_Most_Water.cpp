class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int temp_max = 0;
        int max = 0;

        while(left<right){
            std::cout << left << std::endl;
            std::cout << right << std::endl;
            if(height[left] < height[right]){
                temp_max = height[left] * (right-left);
                if(temp_max > max){
                    max = temp_max;
                }
                left++;
            }
            else if(height[left] > height[right]){
                std::cout <<"test"<< height[right] << std::endl;
                temp_max = height[right] * (right-left);
                if(temp_max > max){
                    max = temp_max;
                }
                right--;
            }
            else if(height[left] == height[right]){
                temp_max = height[right] * (right-left);
                if(temp_max > max){
                    max = temp_max;
                }
                if(height[left+1] < height[right-1]){
                    right--;
                }
                if(height[left+1] >= height[right-1]){
                    left++;
                }
            }
        }

        return max;
    }
};

    // int maxArea(vector<int>& height) {
    //     int max = 0;
    //     int temp_max = 0;
    //     for(int i=0; i<height.size(); i++){
    //         for(int j=i+1; j<height.size(); j++){
    //             if(height[i]>height[j]){
    //                 temp_max = height[j] * (j-i);
    //             }
    //             if(height[i]<=height[j]){
    //                 temp_max = height[i] * (j-i);
    //             }
    //             if(temp_max > max){
    //                 max = temp_max;
    //             }
    //         }
    //     }
    //     return max;
    // }
