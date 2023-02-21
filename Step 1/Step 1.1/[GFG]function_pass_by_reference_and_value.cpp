class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        b+=2;
        return {a+1,b};
    }
};
