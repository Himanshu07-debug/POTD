vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
    // code here
    
    int n = intervals.size();
    int st = newInterval[0], en = newInterval[1];
    
    vector<vector<int>> ans;
    
    int i = 0;
    
    while(i < n && st > intervals[i][1]){
        ans.push_back(intervals[i]);
        i++;
    }
    
    if(i == n) ans.push_back(newInterval);
    else{
        
        newInterval[0] = min(newInterval[0],intervals[i][0]);
        
        while(i < n && intervals[i][0] <= en){
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        
        ans.push_back(newInterval);
        
        while(i < n){
            ans.push_back(intervals[i]);
            i++;
        }
        
    }
    
    return ans;
}