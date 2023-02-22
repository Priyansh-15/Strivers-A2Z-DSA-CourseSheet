class Solution {
public:
    int reverse(int x) {
        bool neg=0;
        if(x<0)
            neg=1;
        x=abs(x);
        long long int ans=0;
        while(x>0)
        {
            ans=(ans*10)+x%10;
            if(neg)
            {
                if(ans>pow(2,31))
                    return 0;
            }
            else
            {
                if(ans>=pow(2,31))
                    return 0;
            }
            x/=10;
        }
        if(neg)
            ans*=-1;
        return ans;
    }
};
