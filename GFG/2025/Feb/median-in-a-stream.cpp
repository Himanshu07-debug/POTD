vector<double> getMedian(vector<int> &arr) {
    // code here
    vector<double> ans;
    priority_queue<int> Hmax;
    priority_queue<int, vector<int>, greater<int>> Hmin;
    
    Hmax.push(arr[0]);
    ans.push_back(arr[0]);
    
    for(int i = 1; i < arr.size(); i++){
        
        if(Hmax.size() > Hmin.size()){
            if(arr[i] >= Hmax.top()){
                Hmin.push(arr[i]);
            }
            else{
                Hmax.push(arr[i]);
                Hmin.push(Hmax.top());
                Hmax.pop();
            }
            double x = (Hmin.top() + Hmax.top())*1.0/2.0;
            ans.push_back(x);
        }
        else{
            if(arr[i] <= Hmin.top()){
                Hmax.push(arr[i]);
            }
            else{
                Hmin.push(arr[i]);
                Hmax.push(Hmin.top());
                Hmin.pop();
            }
            ans.push_back(Hmax.top());
        }
        
    }
    return ans;
}