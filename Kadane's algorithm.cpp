// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        long long int max_int_end=0,max_int_far=INT_MIN,n=arr.size();
        for(int i=0;i<n;i++)
        {
            max_int_end += arr[i];
            if(max_int_far < max_int_end)
                max_int_far = max_int_end;
                
            if(max_int_end < 0)
                max_int_end = 0;
        }
        return max_int_far;
    }
};

//gfg 