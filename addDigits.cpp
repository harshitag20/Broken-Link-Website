class Solution {
public:
    int addDigits(int num)
     {
        int ans=10;
        if(num==0) return 0;
        while(ans>9)
        {
            ans=0;
            while(num)
            {
                int d=num%10;
                ans=ans+d;
                num=num/10;
            }
            num=ans;
            
        }
        return ans;
    }
};
