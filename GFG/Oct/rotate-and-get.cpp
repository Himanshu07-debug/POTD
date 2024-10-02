int rotateDelete(vector<int> &arr) {
    // Your code here
    int n = arr.size();
    int k = 1;
    
    while(arr.size() > 1){
        
        int x = arr.back();
        arr.pop_back();
        arr.insert(arr.begin(), x);
        
        int indx = arr.size() - k + 1;
        k++;
        
        if(indx <= 0) indx = 1;

        indx--;
        for(int i = indx; i < arr.size() - 1; i++){
            arr[i] = arr[i + 1];
        }
        arr.pop_back();
        
        // for(int  y : arr){
        //     cout << y << " ";
        // }
        // cout << endl;
        
    }
    
    return arr[0];
}