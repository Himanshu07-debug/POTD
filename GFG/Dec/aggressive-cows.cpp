class Solution {
  public:

    bool possible(int mid, vector<int>&arr,int k)
      {
          int i,j,temp=arr[0],count=1;
          for(i=1;i<arr.size();i++)
          {
              if(arr[i]-temp>=mid)
              {
                  temp=arr[i];
                  count++;
              }
              if(count==k)  return true;
          }
          return false;
           
      }
      
    int aggressiveCows(vector<int> &arr, int k) {
    
        int n = arr.size();
        int  i,j;
        sort(arr.begin(), arr.end()) ;
       int r=arr[n-1]-arr[0],ans=1;
       int l=0,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(possible(mid,arr,k))
            {
                l=mid+1;
                ans = mid;
            }
            else
            {
                r=mid-1;
                
            }
            
        }
        return ans;
    }
};