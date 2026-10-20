class Solution {
public:
    int palind(string s,int l,int r){
        int count = 0;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            count++;
            l--;
            r++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int n = s.size();
        int res = 0;
        for(int i=0;i<n;++i){
            res+=palind(s,i,i); //odd palindromes
            res+=palind(s,i,i+1); //even palindromes
        }
        return res;
    }
};
