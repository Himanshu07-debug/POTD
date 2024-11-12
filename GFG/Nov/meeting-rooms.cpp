bool canAttend(vector<vector<int>> &arr) {
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i][0]==arr[i+1][0]){
            return false;
        }
        else if(arr[i][1]>arr[i+1][0]){
            return false;
        }
    }
    return 1;
}