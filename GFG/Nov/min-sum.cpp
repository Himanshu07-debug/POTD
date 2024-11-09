string minSum(vector<int> &arr) {
        
    // code here
    int z = arr.size();
    
    string s1;
    string s2;
    
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < z; i++){
        
        if(i&1) s1 += to_string(arr[i]);
        else s2 += to_string(arr[i]);
        
    }
    
    int n = s1.size() - 1 , m = s2.size() - 1;

    int carry = 0;

    string ans;

    while(n >= 0 || m >= 0 || carry > 0){

        int x = carry;

        if(n >= 0){
            x += (s1[n] - '0');
            n--;
        }

        if(m >= 0){
            x += (s2[m] - '0');
            m--;
        }

        int last = x % 10;

        ans += to_string(last);

        x /= 10;

        carry = x;

    }
    
    // reverse(ans.begin(), ans.end());
    
    while(ans.size() && ans.back() == '0') ans.pop_back();
    
    if(ans.size() == 0) ans += "0";
    else reverse(ans.begin(), ans.end());

    return ans;
    
}