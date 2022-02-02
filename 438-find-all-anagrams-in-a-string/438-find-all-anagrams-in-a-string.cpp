class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        
        int s_len=s.size();
        int p_len=p.size();
        
        if(s_len<p_len)
            return ans;
        
        vector<int>window(26,0);
        vector<int>hash(26,0);
        
        for(int i=0;i<p_len;i++){
            hash[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        
        if(window==hash)
            ans.push_back(0);
        
        for(int i=p_len;i<s_len;i++){
            window[s[i-p_len]-'a']--;
            window[s[i]-'a']++;
            if(window==hash)
                ans.push_back(i-p_len+1);
        }
        
        return ans;
    }
};