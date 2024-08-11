#include <iostream>
using namespace std;

class Solution {
  public:
    // long long sum =0;
    long long sumOfSeries(long long N) {
        if(N==0)
        {
            return 0;
            
        }
        return (N*N*N)+sumOfSeries(N-1);
        // long long sum= sumOfSeries(N-1) ;
        // sum = sum +(N*N*N) ;
        // return sum;
    }
};
int main(){
    long long N;
    cin>>N;
    Solution obj;
    
    cout<<obj.sumOfSeries(N);
    
    return 0;
}
