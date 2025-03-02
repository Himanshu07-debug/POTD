vector<int> maxOfSubarrays(vector<int>& arr, int k) {
    // code here
    vector<int> ans;
    
    int maxE = -1;
    int maxI = -1;
    
    int n = arr.size();
    
    for(int i=0;i<n;i++){
        if(arr[i]>=maxE){
            maxE = arr[i];
            maxI = i;
        }
        
        if(i-k+1 > maxI){
            //find again
            maxE = -1;
            maxI = -1;
            
            for(int j=i-k+1;j<i+1;j++){
                if(arr[j]>=maxE){
                    maxE = arr[j];
                    maxI = j;
                }
                
            }
            
        }
        
        
        if(i-k+1 >=0){
            ans.push_back(maxE);
            
        }
        
        
    }
    return ans;
    
}