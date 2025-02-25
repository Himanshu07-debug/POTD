class Solution {
    public:
      int getMaxArea(vector<int> &arr) {
          // Your code here
          int n = arr.size();
          
          vector<int> nxt(n, n), prev(n, -1);
          
          stack<int> st;
          
          for(int i = 0; i < n; i++){
              
              while(st.size() && arr[st.top()] >= arr[i]){
                  st.pop();
              }
              
              if(st.size()) prev[i] = st.top();
              
              st.push(i);
              
          }
          
          stack<int> st2;
          
          for(int i = n-1; i >= 0; i--){
              
              while(st2.size() && arr[st2.top()] >= arr[i]){
                  st2.pop();
              }
              
              if(st2.size()) nxt[i] = st2.top();
              
              st2.push(i);
              
          }
          
          int ans = 0;
          
          for(int i = 0; i < n; i++){
              int a = arr[i] * (nxt[i] - prev[i] - 1);
              ans = max(ans, a);
          }
          return ans;
      }
  };
  