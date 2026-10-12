class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        int n = s.size();
        int l = 0;
        set<char> st;
        int maxlen = INT_MIN;
        for(int r = 0;r<n;r++){
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);
            maxlen = max(maxlen,r-l+1);
        }
        return maxlen;
    }
};
