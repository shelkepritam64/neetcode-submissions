class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        if(n==0) return 0;

        sort(nums.begin(),nums.end());
        int longest = 1;
        int curr = 0;
        int lastsmallest = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastsmallest){
                curr++;
                lastsmallest = nums[i];
            }else if(nums[i]!=lastsmallest){
                curr = 1;
                lastsmallest = nums[i];
            }
            longest = max(curr,longest);
        }


    return longest;
    }
};
