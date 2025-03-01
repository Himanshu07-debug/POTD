string decodedString(string &s) {
    int n = s.length();
    stack<string>st;
    string str="";
    int i=0;
    while(i<n){
        if(s[i]==']'){
            string str="";
            int cnt=0;
            while(!st.empty() && st.top()>="a" && st.top()<="z"){
                string ch = st.top();
                st.pop();
                str = ch + str;
            }
            if(!st.empty() && st.top()=="[") st.pop();
            int k=1;
            while(!st.empty() && st.top()>="0" && st.top()<="9"){
                string ch = st.top();
                int c = stoi(ch);
                st.pop();
                cnt = k*(c) + cnt;
                k = k*10;
            }
            string final = "";
            for(int i=0;i<cnt;i++) final+=str;
            if(final.length()) st.push(final);
        }
        else{
            string str(1,s[i]);
            st.push(str);
        }
        i++;
    }
    string ans = "";
    while(!st.empty()){
        string str =st.top();
        ans = str+ans;
        st.pop();
    }
    return ans;
}