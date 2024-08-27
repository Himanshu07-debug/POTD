int findMaxDiff(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        
        vector<int> left(n, 0), right(n, 0);
        
        stack<int> st;
        
        for(int i=0;i<n;i++){
            
            while(st.size() && st.top() >= arr[i]) st.pop();
            
            if(st.size()){
                left[i] = st.top();
            }
            
            st.push(arr[i]);
            
        }
        
        stack<int> st2;
        
        int mx = 0;
        
        for(int i=n-1;i>=0;i--){
            while(st2.size() && st2.top() >= arr[i]) st2.pop();
            
            if(st2.size()){
                right[i] = st2.top();
            }
            
            mx = max(mx, abs(left[i] - right[i]));
            
            st2.push(arr[i]);
        }
        
        return mx;
        
        
    }