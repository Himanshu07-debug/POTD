int evaluate(vector<string>& arr) {
    stack<long long> st;

    for (string& s : arr) {
        if (s != "+" && s != "-" && s != "/" && s != "*") {
            st.push(stoll(s));
        } else {
            long long a = st.top();
            st.pop();
            long long b = st.top();
            st.pop();

            if (s == "+") {
                st.push(b + a);
            } else if (s == "-") {
                st.push(b - a);
            } else if (s == "/") {
                st.push(b / a);
            } else if (s == "*") {
                st.push(b * a);
            }
        }
    }
    return st.top();
}