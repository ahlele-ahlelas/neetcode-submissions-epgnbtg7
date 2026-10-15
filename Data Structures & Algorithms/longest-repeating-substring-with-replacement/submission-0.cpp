class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int ans = 0;
        int max_freq = 0;
        unordered_map<char,int> freq;
        for(int r=0;r<s.size();++r){
            freq[s[r]]++;
            max_freq = max(max_freq,freq[s[r]]);
            while(r-l+1-max_freq>k){
                freq[s[l]]--;
                l++;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};
