class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        if(nums.size() < 2){
            return -1;
        }

        int largest = -1;
        int secondlargest = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                secondlargest = largest;
                largest = nums[i];
            }else if(nums[i]<largest && nums[i]>secondlargest){
                secondlargest = nums[i];
            }
        }

        return secondlargest;  

    }
};