class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> numbers;
        int n_3 = nums.size()/3;
        for(int i=0;i<nums.size();i++){
            int count = 0;
            for(int j=i;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            auto it = std::find(numbers.begin(), numbers.end(), nums[i]);
            if(count > n_3 && it == numbers.end()){
                numbers.push_back(nums[i]);
            }
        }

        return numbers;
    }
};

// # O(n)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> numbers;
        int n_3 = nums.size()/3;
        int el1=0,count1 = 0;
        int el2=0,count2 = 0;
        for(int num : nums){
            if(count1 == 0 && num !=el2){
                el1 = num;
                count1 = 1;
            }else if(count2 == 0 && num !=el1){
                el2 = num;
                count2 = 1;
            }else if(el2 == num){
                count2++;
            }else if(el1 == num){
                count1++;
            }else{
                count1--;
                count2--;
            }
        } 

        count1 = 0;
        count2 = 0;
        for(int num: nums){
            if(num == el1) count1++;
            else if(num == el2) count2++;
        }   

        vector<int> result;
        if(count1 > n_3){
            result.push_back(el1);
        }
        if(count2 > n_3){
            result.push_back(el2);
        }    

        return result;
    }
};