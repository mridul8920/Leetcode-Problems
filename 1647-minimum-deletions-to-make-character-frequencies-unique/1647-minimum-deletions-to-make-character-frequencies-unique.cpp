class Solution {
public:
    int minDeletions(string s) {
        int n=s.size();
        vector<int>v(26,0);
        set<int>st;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(v[i]>0 && st.find(v[i])!=st.end())
            {
                while(v[i]>0 && st.find(v[i])!=st.end())
                {
                    cnt++;
                    v[i]--;
                }
            }
            st.insert(v[i]);
        }
        return cnt;
    }
};