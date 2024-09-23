vector<int> findTwoElement(vector<int>& arr) {
    vector <int> ans;
    int n=arr.size();
    unordered_map <int,int> mp;
    for(int e:arr)mp[e]++;
    for(auto e:mp){
        if(e.second==2){
            ans.push_back(e.first);
            break;
        }   
    }    
    for(int i=1;i<=n;i++){
        if(mp.find(i)==mp.end()){
            ans.push_back(i);
            break;
        }
    }
    return ans;
}

