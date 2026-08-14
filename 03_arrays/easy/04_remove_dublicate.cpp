class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        vector <int> output;
        output.push_back(nums[0]);
        for(int i =1;i<nums.size();i++){
            if(nums[i-1] != nums[i]){
                output.push_back(nums[i]);

            }
            
        }
        nums = output;
        int final = output.size();

        return final;
        
    }
};