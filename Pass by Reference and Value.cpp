class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        a=a+1;
        b=b+2;
        return{a,b};
    }
};
