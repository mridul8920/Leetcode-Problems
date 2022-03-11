class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0,i=0;
        if(coins<costs[0])
            return 0;
        while(coins>0 and i<costs.size()){
            if(coins>=costs[i]){
                coins-=costs[i];
                ans++; 
            }
            else if(coins<costs[i] || coins<0){
                break;
            }
            i++;
        }
        
        return ans;
    }
};