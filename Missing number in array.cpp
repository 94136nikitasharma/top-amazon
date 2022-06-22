class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int totalsum=(n*(n+1))/2;
        int currsum=0;
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            currsum+=array[i];
            
        }
         ans=totalsum-currsum;
        return ans;
    }
};
