string roundToNearest(string str) {
    // Complete the function
    int n = str.size();
    
    int last = str[n-1] - '0';
    int c = 0;
    
    if(last > 5){
        str[n-1] = '0';
        c = 1;
    }
    else{
        str[n - 1] = '0';
    }
    
    int i = n-2;
    
    while(i >= 0 && c){
        int sum = (str[i] - '0') + c;
        
        str[i] = char((sum%10) + '0');
        c = sum/10;
        
        i--;
    }
    
    if(c) str.insert(str.begin(), '1');
    
    return str;
}