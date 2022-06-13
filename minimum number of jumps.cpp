class Solution{
  public:
    int minJumps(int arr[], int n){
         if(n<=1)
        {
            return 0;
        }
         if(arr[0]==0)
        {
            return -1;
        }
        int step=arr[0];
        int jump=1;
        int maxreach=arr[0];
       
       
       // int i=1;
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            {
                return jump;
            }
            maxreach=max(maxreach,arr[i]+i);
            step--;
            if(step==0)
            {
                jump++;
                if(i>=maxreach)
                return -1;
                    step=maxreach-i;
                
            }
        }
        return -1;
    }
};
