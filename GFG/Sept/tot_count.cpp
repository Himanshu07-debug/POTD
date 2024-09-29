int totalCount(int k, vector<int>& arr) {
    // code here
    int tot = 0;
    for(int x : arr){
        tot += (x + k - 1)/k;
    }
    return tot;
}