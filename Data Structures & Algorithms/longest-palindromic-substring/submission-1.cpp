class Solution {
public:
    string isp(string s,int l,int r){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return s.substr(l + 1, r - l - 1);
    }
    string longestPalindrome(string s) {
        string s1 = "";
        for(int i=0;i<s.size();++i){
            string odd = isp(s,i,i); //for odd length strings
            string even = isp(s,i,i+1); //for even length strings
            if(odd.size()>s1.size()) s1 = odd;
            if(even.size()>s1.size()) s1 = even;
        }
        return s1;
    }
};
