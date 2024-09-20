 int countBuildings(vector<int> &height) {
    // code here
    int mx = height[0];
    int cnt = 1;
    
    for(int i = 1; i < height.size(); i++){
        if(height[i] > mx) cnt++;
        mx = max(mx, height[i]);
    }
    return cnt;
}