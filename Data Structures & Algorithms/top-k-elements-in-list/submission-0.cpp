class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> a;
        for(int num:nums){
            a[num]++;
        }
        unordered_map<int, int> reverse_mp;
        for (auto &p : a) {
            reverse_mp[p.second] = p.first;
        }
        vector<int> b;
        for(auto &[key,value]:reverse_mp){
            b.push_back(key);
        }
        sort(b.rbegin(),b.rend());
        vector<int> res;
        for(int i=0;i<k;++i){
            res.push_back(reverse_mp[b[i]]);
        }
        return res;
    }
};
