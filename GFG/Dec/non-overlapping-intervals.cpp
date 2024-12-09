 int minRemoval(vector<vector<int>> &intervals) {
    // code here
    int n = intervals.size();
    vector <pair<int,int>> v;
    for(auto it:intervals){
        v.push_back({it[1],it[0]});
    }
    pair <int,int> temp={INT_MIN,INT_MIN};
    int count=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i].second>=temp.first){
            count++;
            temp=v[i];
        }
    }
    return n-count;
}