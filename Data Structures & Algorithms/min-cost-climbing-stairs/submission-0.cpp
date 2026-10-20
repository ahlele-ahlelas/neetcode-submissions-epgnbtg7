class Solution {
public:
    int cos(vector<int>& cost,int idx){
        if(idx<=1) return 0;
        int take = cost[idx-1] + cos(cost,idx-1);
        int skip = cost[idx-2] + cos(cost,idx-2);
        int amount = min(take,skip);
        return amount;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        return cos(cost,n);
    }
};
