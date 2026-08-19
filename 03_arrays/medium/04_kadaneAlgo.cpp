class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int largestsum = nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum = max(nums[i],nums[i]+sum);
            largestsum = max(sum,largestsum);

        }
        return largestsum;
    }
};