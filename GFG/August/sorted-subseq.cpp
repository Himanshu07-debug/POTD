vector<int> find3Numbers(vector<int> &arr) {
        // Code here
        
        int b = -1;
        
        vector<int> ans;
        stack<int> st;
        
        int n = arr.size();
        for(int i=n-1; i>=0; i--){
            
            if(arr[i] < b){
                ans.push_back(arr[i]);
                ans.push_back(b);
                break;
            }
            
            while(st.size() && st.top() <= arr[i]){
                st.pop();
            }
            
            st.push(arr[i]);
            
            if(st.size() > 1){
                b = max(b, st.top());
            }
            
            if(st.size() == 3) break;
            
        }
        
        // cout << st.size() << endl;
        
        if(ans.size() > 0){
            for(int i=n-1;i>=0;i--){
                if(arr[i] > b){
                    ans.push_back(arr[i]);
                    break;
                }
            }
        }
        else if(st.size() == 3){
            while(st.size()){
                ans.push_back(st.top());
                st.pop();
            }
            
            reverse(ans.begin(), ans.end());
        }
        
        return ans;
        
    }