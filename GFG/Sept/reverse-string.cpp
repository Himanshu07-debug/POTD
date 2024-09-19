string reverseWords(string str) {
    stack<string> st;
    int i = 0;
    int n = str.length();

    while (i < n) {
        string s;
        while (i < n && str[i] != '.') { 
            s += str[i];
            i++;
        }
        st.push(s);
        i++; 
    }

    string ans;
    while (!st.empty()) {
        ans += st.top();
        st.pop();
        if (!st.empty()) {
            ans += '.'; 
        }
    }

    return ans;
    
}