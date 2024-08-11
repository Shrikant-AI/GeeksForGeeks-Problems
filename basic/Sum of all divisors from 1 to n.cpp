#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long sumOfDivisors(int N)
    {
        long long sum=0;
        for (int i=1; i<=N ; i++){
            sum += i * (N/i); // here if 10 / 3 then there will be 3 number less than 10 which are completely divisible by 3 , this is the main logic.
            
        } 
        return sum;
    }
        
 };

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    Solution obj;
  
    cout<<"sum of divisors is: "<<  obj.sumOfDivisors(N);
    return 0;


}
