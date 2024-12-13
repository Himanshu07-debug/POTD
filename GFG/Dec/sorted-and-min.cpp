int findMin(vector<int>& arr) {
    // complete the function here
    sort(arr.begin(), arr.end());
    
    return arr[0];
}