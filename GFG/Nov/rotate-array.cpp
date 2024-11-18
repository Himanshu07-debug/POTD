void rotateArr(vector<int>& arr, int d) {
    // code here
    int n = arr.size();
    d=d%n;
    rotate(arr.begin(), arr.begin()+d, arr.end());
}