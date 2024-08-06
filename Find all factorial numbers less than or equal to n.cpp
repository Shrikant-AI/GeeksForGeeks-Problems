class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        long long ans=1;
        vector<long long>fact;
        
        if(n>=1)fact.push_back(ans);
        for(long long i=2;i<=n;i++){
            ans = i*ans;
            if(ans>n){
            break;
            }
            fact.push_back(ans);
        }
        
        return fact;
    }
};
