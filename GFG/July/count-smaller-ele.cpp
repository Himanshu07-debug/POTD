#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace __gnu_pbds; 

typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update> PBDS;

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        PBDS st;
        
        vector<int> ans(n, 0);
        
        st.insert({arr[n-1], n-1});
        
        for(int i=n-2; i>=0; i--){
            
            st.insert({arr[i], i});
            
            int indx = st.order_of_key(make_pair(arr[i], -1));
            
            ans[i] = indx;
            
        }
        
        return ans;
    }
};