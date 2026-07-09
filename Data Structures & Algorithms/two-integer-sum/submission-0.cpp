class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0;i<nums.size();i++){
            int num = nums[i];
            int fnum = target-num;
            for(int j=i+1;j<nums.size();j++){
                if(fnum==nums[j]){
                    return {i,j};
                }

            }
        
        }
        return {-1,-1};
    }
};
