class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=*min_element(strs.begin(),strs.end());
        string ans="";
        if(strs.size()==0)
            return "";
        for(int i=0;i<s.size();i++){
            for(int j=0;j<strs.size();j++){
                if(s[i]!=strs[j][i])
                    return ans;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};