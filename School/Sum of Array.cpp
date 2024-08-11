class Solution {
  public:
    // Function to return sum of elements
    int sum(vector<int>& arr) {
        int sum = 0;
        // vector<int>result ;
        for (int i=0;i<arr.size();i++){
            sum = sum+arr[i];
            // result.push_back(sum);
        }
        return sum;
    }
};

// same for javascript


