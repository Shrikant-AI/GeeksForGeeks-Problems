class Solution {
    /**
   first we have to convert n to BigInt .Also the 1 & 2 in this formulaes.
   This will attach a n to sum because BigInt have n at the end. So t remove this n we have to convert the sum variable to string.
   Bcz sum is now string and no more a BigInt hence there will be no n suffix.
    */
    seriesSum(n) {
        let bigN = BigInt(n);
        let sum =(bigN*(bigN+BigInt(1))/BigInt(2))
        return sum.toString() ; 
    }
}



/* C++ 

class Solution {
  public:
    long long seriesSum(int n) {
       long long int num = n;
      return ((num*(num+1))/2);
    
    }
};  */
