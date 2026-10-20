class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_set<int> a,b;
        for(int i=0;i<s.size();++i){
            a.insert(s[i]);
            b.insert(t[i]);
        }
        return(a==b);
    }
};
