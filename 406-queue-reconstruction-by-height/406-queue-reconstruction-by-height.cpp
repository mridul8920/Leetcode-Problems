class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
        if(p.empty()){return p;}
        // sort by height decending, then k ascending,
        sort(p.begin(), p.end(), [](const auto& a,const auto& b) {
            return a[0] > b[0] || ((a[0] == b[0])&& a[1] < b[1] );
        });
        // start from highest,
        // insert accodring to the k val
        list<pair<int,int>> qList;
        
        for(const auto& item: p){
            auto it = qList.begin();
            for(int i = 0; i <item[1]; i++){
                ++it;   
            }
            qList.insert( it, pair<int,int>(item[0], item[1]));
        }
        
        // construct the q
        vector<vector<int>> ret;
        for(const auto& item: qList){
            ret.emplace_back(vector<int>{item.first, item.second});
        }
        return ret;
    }
};