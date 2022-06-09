vector<int> subarraySum(int arr[], int n, long long s)
    {
        int i=0;
        int j=0;
        int sum=0;
        vector<int>ans;
        while(i<=n and j<=n)
        {
            if(sum==s)
            {
                ans.push_back(i+1);
                ans.push_back(j);
                return ans;
            }
            else if(sum<s)
            {
                sum=sum+arr[j++];
            }
            else
            {
                sum=sum-arr[i];
                i++;
            }
        }
        ans.push_back(-1);
        return ans;
    }
};
