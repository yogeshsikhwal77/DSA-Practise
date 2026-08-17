class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int output;
        for(int i=0;i<=n;i++){
            if (std::find(nums.begin(), nums.end(), i) != nums.end());
            else{
                output = i;
            }
        }

        return output;
        
    }
};