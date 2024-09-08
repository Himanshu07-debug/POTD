int minJumps(int arr[], int n){
    // Your code here
    
    if(arr[0] == 0){
        if(n == 1) return 0;
        else return -1;
    } 
    
    if(n == 1) return 0;
    
    int maxReach = arr[0], currReach = arr[0];
    int jump = 1;
    int i = 0;
    
    while(i < n-1){
        
        maxReach = max(maxReach, i + arr[i]);
        
        if(i == currReach){
            
            jump++;
            currReach = maxReach;
            
            if(currReach == i) return -1;
            
        }
        
        i++;
        
    }
    
    return jump;
    
}