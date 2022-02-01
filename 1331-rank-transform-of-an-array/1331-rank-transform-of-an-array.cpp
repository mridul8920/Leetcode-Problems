class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>v(arr);
        sort(v.begin(),v.end());
        unordered_map<int,int>rank;
        for(auto it:v){
            rank.emplace(it,rank.size()+1);
        }
        for(int i=0;i<arr.size();i++){
            v[i]=rank[arr[i]];
        }
        return v;
    }
};