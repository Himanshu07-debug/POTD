long long countPairs(vector<int> &arr, vector<int> &brr) {
    // Your Code goes here.
    sort(brr.begin(), brr.end());
    
    int n = arr.size(), m = brr.size();
    
    long long cnt = 0;
    
    int o2 = 0;
    int t2 = 0;
    
    for(int x : brr){
        if(x == 1) o2++;
        else if(x == 2) t2++;
        else break;
    }
    
    for(int i=0;i<n;i++){
        
        if(arr[i] == 1) continue;
        
        if(arr[i] == 2){
            cnt += o2;
            int indx = lower_bound(brr.begin(), brr.end(), 5) - brr.begin();
            cnt += (m - indx);
        }
        else if(arr[i] == 3){
            cnt += o2;
            cnt += t2;
            int indx = lower_bound(brr.begin(), brr.end(), arr[i] + 1) - brr.begin();
            cnt += (m - indx);
        }
        else{
            cnt += o2;
            int indx = lower_bound(brr.begin(), brr.end(), arr[i] + 1) - brr.begin();
            cnt += (m - indx);
        }
        
        // cout << cnt << endl;
    }
    
    return cnt;
    
}