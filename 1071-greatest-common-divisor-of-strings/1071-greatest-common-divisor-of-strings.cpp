class Solution {
    int FindGcd(int a,int b){
        if(b==0)    return a;
        return FindGcd(b,a%b);
    }
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1)
            return "";
        int gcd=FindGcd(str1.size(),str2.size());
        return str1.substr(0,gcd);
    }
};