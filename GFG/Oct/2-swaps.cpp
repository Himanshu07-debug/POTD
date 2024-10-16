bool checkSorted(vector<int> &arr) {
    // code here.
    int cnt = 0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] != i+1)
        {
            swap(arr[i],arr[arr[i]-1]);
            cnt++;
            i--;
        }
        if(cnt>2)
            return false;
    }
    return cnt==0 or cnt==2;
}