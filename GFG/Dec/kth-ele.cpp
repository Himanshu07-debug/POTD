int kthElement(vector<int>& a, vector<int>& b, int k) {
    // code here
    vector<int>v;
    int i = 0;
    int j = 0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j]){
            v.push_back(a[i]);
            i++;
        }else {v.push_back(b[j]);
        j++;}
        
    }
    while(i<a.size()){
        v.push_back(a[i]);
            i++;
    }
    while(j<b.size()){
        v.push_back(b[j]);
            j++;
    }
    return v[k-1];
    
}