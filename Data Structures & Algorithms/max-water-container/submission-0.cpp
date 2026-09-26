class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        long long ans=0;

        while(l<r){
            int w = r-l;
            int h = min(height[l],height[r]); 
            long long a = w * h;
            ans = max(ans,a);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};