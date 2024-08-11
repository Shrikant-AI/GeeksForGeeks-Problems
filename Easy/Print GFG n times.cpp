// Recursion


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void printGfg(int N) {
        
        if(N==0) return;
        cout<<"GFG ";
        printGfg(N-1);
    }
};

int main(){
  int N;
  cin>>N;
  Solution obj;
  obj. printGfg(N);
  return;
}
