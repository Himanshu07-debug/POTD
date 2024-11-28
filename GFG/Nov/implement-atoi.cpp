int myAtoi(char *s) {
    // Your code here
    
    int neg = 1;
    
    int i = 0, val = 0;
    
    while(s[i] != '\0' && s[i] == ' ') i++;
    
    if(s[i] != '\0' && s[i] == '-'){
        neg = -1;
        i++;
    }
    
    while(s[i] != '\0' && s[i] == '0') i++;
    
    while(s[i] != '\0' && isdigit(s[i])){
        if(val*neg > INT_MAX/10) return INT_MAX;
        
        if(val*neg < INT_MIN/10) return INT_MIN;
        
        val = val*10 + (s[i] - '0');
        
        i++;
    }
    
    return neg*val;
    
}