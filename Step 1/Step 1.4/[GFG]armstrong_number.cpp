class Solution {
public:
    bool isPalindrome(int n) {
        vector<int>a;
        if(n<0)
            return 0;
        while(n>0)
        {
            a.push_back(n%10);
            n/=10;
        }
        for(int i=0;i<a.size()/2;i++)
        {
            if(a[i]!=a[a.size()-1-i])
                return 0;
        }
        return 1;
    }
};
