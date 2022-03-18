class Solution {
public:
    int addDigits(int num) {
     int sum=0;
        if(num<10)
            return num;
        while(num){
            
            sum+=num%10;
            num/=10;
            
        }   
        if(sum<9)
            return sum;
        else{
               return  addDigits(sum);
             }
        // return sum;
    }
};