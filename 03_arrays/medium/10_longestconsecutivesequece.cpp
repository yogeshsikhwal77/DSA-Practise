class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // int lowest_int = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     if(lowest_int>nums[i]){
        //         lowest_int = nums[i];
        //     }
        // }
        sort(nums.begin(),nums.end());
        int maxcount = 0;
        int count =1;
        if(nums.empty()) return 0;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
    
            }else if(nums[i] + 1 == nums[i+1]){
                count++;
            }else{
                if(maxcount<count) {
                    maxcount = count;
                }
                count = 1;
            }
        }

        if(maxcount < count){
            maxcount = count;
        }

        

        return maxcount;
        
    }
};