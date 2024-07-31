string longestCommonPrefix(vector<string> arr) {
        // your code here
        string tmp;
        
        for(auto x : arr){
            if(tmp.size() == 0 || x.size() < tmp.size()) tmp = x;
        }
        
        int cnt = 0;
        
        for(int i=0;i<tmp.size();i++){
            
            char c = tmp[i];
            bool f = false;
            
            for(auto x : arr){
                if(x[i] != c){
                    f = true;
                    break;
                }
            }
            
            if(f) break;
            
            cnt++;
            
        }
        
        if(cnt == 0) return "-1";
        
        return tmp.substr(0, cnt);
        
    }