//https://leetcode.com/problems/add-digits/
class Solution {
public:
    int addDigits(int num) {
         
        while(num > 9){
            int ans=0;
            int rem;
            while(num!=0){
                rem=num%10;
                num /=10;
                ans += rem;
            }
            num = ans;
        
        }
        
        return num;
        
    }
};
