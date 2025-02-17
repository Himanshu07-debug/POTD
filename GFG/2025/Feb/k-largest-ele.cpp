vector<int> kLargest(vector<int>& arr, int k) {
    // Your code here
    int n= arr.size();
    sort(arr.rbegin(),arr.rend());
    vector<int>result;
    for(int i=0; i<k;i++)
    {
        result.push_back(arr[i]);
    }
    return result;
}