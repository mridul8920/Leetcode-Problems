class Solution {
public:
    
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> m;
    for (auto &w : words)
        ++m[w];
    int res = 0, center = 0, sz = 2;
    for (auto &[w, cnt] : m) {
        auto reversed = string(rbegin(w), rend(w));
        if (w == reversed) {
            res += 2 * (cnt / 2);
            center |= cnt % 2;
        }
        else {
            auto it = m.find(reversed);
            if (it != end(m))
                res += min(cnt, it->second);
        }
    }
    return sz * res + (center ? sz : 0);
        // int ans=0,flag=0;
        // vector<string>words;
        // for(int i=0;i<v.size();i++){
        //     words.push_back(v[i]);
        // }
        // for(int i=words.size()-1;i>=0;i--){
        //     string temp;
        //     temp.push_back(words[i][1]);
        //     temp.push_back(words[i][0]);
        //     words.pop_back();
        //    auto it = find (words.begin(), words.end(), temp);
        //     if (it != words.end())
        //     {
        //         ans=ans+temp.size()*2;
        //     }
        //     else{
        //         if(temp[0]==temp[1] and flag==0){
        //             ans= ans+2;
        //             flag=1;
        //         }               
        //         else ans+=0;
        //     }
        // }
        // return ans;
    }
};