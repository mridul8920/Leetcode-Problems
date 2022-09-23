class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        long long int pow = 1;
        for(int i=columnTitle.size()-1;i>=0;i--){
            ans = ans + pow*(columnTitle[i]-64); //Finding ASCII value 
            // Char minus int means here char automatically gets converted to its ASCII value Example: A(ASCII value=65) -> 65-64=1 So A implies 1 this way
            pow=pow*26;
        }
        return ans;
    }
};