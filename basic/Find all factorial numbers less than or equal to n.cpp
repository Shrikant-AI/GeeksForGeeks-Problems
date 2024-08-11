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

// Using Recursion :

class Solution {
  public:
  
    void findfact (long long n, long long current, long long fact ,vector<long long>&result){
        if(fact>n)return ;
        
        result.push_back(fact);
        findfact(n,current+1,fact*(current+1),result);
    }
    vector<long long> factorialNumbers(long long n) {
        vector<long long>result;
        findfact(n,1,1,result);
        return result;
   
    }
};
