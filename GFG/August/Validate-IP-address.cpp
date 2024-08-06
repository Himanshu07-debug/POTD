 int isValid(string str) {
        // code here
       int curNum=-1;
       int dotCount=0;
       int numCount=0;
       
       for(int i=0;i<str.size();i++){
           if(str[i]!='.'){
             if(curNum==-1){
                if(str[i]=='0' && i<str.size() && str[i+1]!='.')
                  return false;
                curNum=0;
               
             }
             curNum=curNum*10+str[i]-'0';
             
           }
           else  if(str[i]=='.'){
               
               dotCount++;
               
               if(curNum>255 || curNum<0 || dotCount>3) 
                 return false;
               
               curNum=-1;
               
           }
           
        //   cout<<curNum<<endl;
           
       }
       
       return dotCount==3 && curNum>=0 && curNum<256;
    }