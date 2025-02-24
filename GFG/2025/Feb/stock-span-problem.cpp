vector<int> calculateSpan(vector<int>& arr) {
    // write code here
     int n = arr.size();
    vector<int> ans(n);
    
    stack<int> st;
    st.push(0);
    ans[0]=1;
    
    for(int i=1; i<n; i++){
        while(!st.empty() && arr[i] >= arr[st.top()]) st.pop();
        if(st.empty()) ans[i] = i+1;
        else ans[i] = i - st.top();
        st.push(i);
    }   
    
    return ans;
}