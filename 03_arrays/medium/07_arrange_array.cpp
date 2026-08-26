class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        if(nums.empty()) return nums;
        // int firstPosIndex = 0;
        vector<int> result(nums.size());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0){
        //         firstPosIndex = i;
        //         break;
        //     }
        // }
        // bool isPositive = true;
        int positive = 0;
        int negative = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                result[positive] = nums[i];
                positive = positive+2;
            }else{
                result[negative] = nums[i];
                negative = negative+2;
            }
        }

        return result;
    }
};