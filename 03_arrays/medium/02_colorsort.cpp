class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[2] = {0};
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                count[0]++;
            }else if(nums[i] == 1){
                count[1]++;
            }      
        }

        for(int i=0;i<nums.size();i++){
            if(count[0] != 0){
                nums[i] = 0;
                count[0]--;
            }else if(count[1] !=0){
                nums[i] = 1;
                count[1]--;
            }else{
                nums[i] = 2;
            }
        }
    }
};

// # for one pass

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low =0;
        int mid =0;
        int high = nums.size() - 1;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};