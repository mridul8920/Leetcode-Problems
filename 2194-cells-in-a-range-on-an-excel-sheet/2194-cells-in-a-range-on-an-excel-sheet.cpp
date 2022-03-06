class Solution {
public:
    vector<string> cellsInRange(string s) {
                vector<string>v;
        for(char i=s[0];i<=s[3];i++){
            for(char j=s[1]-'0';j<=s[4]-'0';j++){
                string str="";
                char c=j+'0';
                str+=i;
                str+=c;
                v.push_back(str);
            }
        }


        return v;
    }
};