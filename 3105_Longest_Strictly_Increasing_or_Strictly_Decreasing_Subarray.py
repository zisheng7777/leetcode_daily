class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        ptr = 0
        increase = 1
        in_result = 1
        decrease = 1
        de_result = 1
        while(ptr < len(nums)-1):
            if(nums[ptr] < nums[ptr+1]):
                increase+=1
            else:
                increase = 1
            ptr+=1
            if(increase > in_result):
                in_result = increase
        ptr = 0

        while(ptr < len(nums)-1):
            if(nums[ptr] > nums[ptr+1]):
                decrease+=1
            else:
                decrease = 1
            ptr+=1
            if(decrease > de_result):
                de_result = decrease

        if(de_result >= in_result):
            return de_result
        else: 
            return in_result

                
