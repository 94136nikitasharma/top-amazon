vector<int> duplicates(int arr[], int n) {
        // code here
        for(int i=0;i<n;i++)
        {
            int j = arr[i]%n;
            arr[j]+=n;
        }
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            if(arr[i]/n > 1)
            {
                res.push_back(i);
            }
        }
        if(res.empty()) res.push_back(-1);
        return res;
    }
