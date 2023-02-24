vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long>ans;
        long long prod=1,ind=2;
        while(prod<=N)
        {
            ans.push_back(prod);
            prod*=ind;
            ind++;
        }
        return ans;
    }
