/*Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function takes two integers a and b as input and returns a list containing their LCM and GCD.

Example 1:

Input: a = 5 , b = 10
Output: 10 5
Explanation: LCM of 5 and 10 is 10, while thier GCD is 5.
Input: a = 14 , b = 8
Output: 56 2
Explanation: LCM of 14 and 8 is 56, while thier GCD is 2.*/


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<long long> lcmAndGcd(long long A, long long B) {
        long long ogA = A;
        long long ogB = B;
        
        while (A > 0 && B > 0) {
            if (A > B) {
                A = A % B;
            } else {
                B = B % A;
            }
        }
        
        long long GCD = max(A, B);
        long long LCM = (ogA * ogB) / GCD;
        return {LCM, GCD};
    }
};

int main() {
    long long A;
    long long B;
    cout << "Enter A & B: ";
    cin >> A >> B;
    Solution obj;
    vector<long long> result = obj.lcmAndGcd(A, B);
    cout << "LCM is: " << result[0] << ", GCD is: " << result[1] << endl;
    return 0;
}
