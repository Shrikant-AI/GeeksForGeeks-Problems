#include <iostream>
using namespace std;

class Solution{
    public:
  
    void printNos(int N)
    {
        if(N==0)return;
        printNos (N-1);
        cout<<N<<" ";
    }
};

int main(){
    int N;
    cin>>N;
    Solution obj;
    obj.printNos(N);
    return 0;
}
