///{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
   void frequencyCount(vector<int>& arr, int N, int P) {
       
    vector<int> freqarr(N + 1, 0);  
    
    // Count the frequency of elements within the range [1, N]
    for (int i = 0; i < N; i++) {
        if (arr[i] <= N) {  // Ensure that arr[i] is within the range [1, N]
            freqarr[arr[i]]++;  // Increment the frequency count of the element
        }
    }
    
    // Modify the original array with the frequency counts
    for (int i = 0; i < N; i++) {
        arr[i] = freqarr[i + 1];  // Update arr with the frequency values
    }
   }
};


//{ Driver Code Starts.

int main() {
    long long t;

    // testcases
    cin >> t;

    while (t--) {

        int N, P;
        // size of array
        cin >> N;

        vector<int> arr(N);

        // adding elements to the vector
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        cin >> P;
        Solution ob;
        // calling frequncycount() function
        ob.frequencyCount(arr, N, P);

        // printing array elements
        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
