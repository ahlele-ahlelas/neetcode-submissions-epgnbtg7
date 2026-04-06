class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> a;
        for(int num:nums){
            a[num]++;
        }
        vector<pair<int,int>> b;
        for(auto &[key,val]:a){
            b.push_back({val,key});
        }
        sort(b.rbegin(),b.rend());
        vector<int> res;
        for(int i=0;i<k;++i){
            res.push_back(b[i].second);
        }
        return res;
    }
};
