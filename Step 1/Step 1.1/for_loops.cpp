void isPrime(int n) {
    if(n==1)
    {
        cout<<"No"<<endl;
        return ;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        // code here
        if(n%i==0)
        {
            cout<<"No"<<endl;
            return ;
        }
    }
    cout<<"Yes";
cout << endl;
return ;
}
