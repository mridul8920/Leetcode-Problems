class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n=digits.size()-1;
        for(int i=n;i>=0;){
            if(digits[i]<9){
                digits[i]+=1;
                break;
            }else if(digits[i]==9){
                digits[i]=0;
                i--;
                if(i<0){
                    digits.insert(digits.begin(),1);
                }
            }
        }
        return digits;
    }
};