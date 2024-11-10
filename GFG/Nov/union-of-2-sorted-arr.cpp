vector<int> findUnion(vector<int> &a, vector<int> &b) {
    // Your code here
    // return vector with correct order of elements
    
        set<int>s1(a.begin(),a.end());
        s1.insert(b.begin(),b.end());
        return vector<int>(s1.begin(),s1.end());
    
}