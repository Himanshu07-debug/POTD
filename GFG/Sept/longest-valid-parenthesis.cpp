int maxLength(string& str) {
    // code here
    int mx=0,op=0,cl=0,mx1=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='(')op++;
        else cl++;
        if(cl>op) op=cl=0;
        if(cl==op) mx=max(mx,op*2);
    }
    op=cl=0;
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]=='(')op++;
        else cl++;
        if(op>cl) op=cl=0;
        if(cl==op) mx1=max(mx1,op*2);
    }
        return max(mx,mx1);
}