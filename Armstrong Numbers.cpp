#include <iostream>
#include <cmath>  // For pow function
using namespace std;

class Solution {
public:
    string armstrongNumber(int n) {
        int ogn = n;
        int sum = 0;
        int numofdigit = 0;
        int temp = n;
        
        // Calculate the number of digits
        while (temp != 0) {
            temp = temp / 10;
            numofdigit++;
        }
        
        // Calculate the sum of the digits raised to the power of numofdigit
        while (n != 0) {
            int digit = n % 10;
            sum = sum + pow(digit, numofdigit);
            n = n / 10;
        }
        
        if (ogn == sum) return "true";
        else return "false";
    }
};

int main() {
    Solution sol;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << sol.armstrongNumber(num) << endl;
    return 0;
}
