 vector<int> findMajority(vector<int>& nums) {
    unordered_map<int,int> map;
    for(auto i: nums){
        map[i]++;
    }
    int limit = nums.size()/3;
    
    vector<int> output;
    int flag=0;
    for(auto i:map){
        if(i.second>limit){
            output.push_back(i.first);
            flag=1;
        }
    }
    if(flag==0)output.push_back(-1);
    sort(output.begin(),output.end());
    return output;
}