
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int n= arr.size();
        int ans= INT_MIN;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum = max(arr[i],sum+arr[i]);
            ans = max(ans,sum);
        }
        return ans;
    }
};

