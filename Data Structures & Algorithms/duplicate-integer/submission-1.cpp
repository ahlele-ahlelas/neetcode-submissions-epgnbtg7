class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        for(int i:nums){
            if(a.count(i)) return true;
            a.insert(i);
        }
        return false;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
};