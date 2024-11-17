void reverseArray(vector<int> &arr) {
    // code here
    for(int i=0;i<arr.size()/2;i++) 
        swap(arr[i],arr[arr.size()-i-1]);
}