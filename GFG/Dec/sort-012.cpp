void sort012(vector<int>& arr) {
    // code here
    vector<int> count(3,0);
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
    }
    int j=2;
    for(int i=arr.size()-1;i>=0;i--){
        while(count[j]==0 && j>=0) j--;
        arr[i]=j; 
        count[j]--;
    }
}