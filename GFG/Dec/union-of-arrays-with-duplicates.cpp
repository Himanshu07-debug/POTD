int findUnion(vector<int> &a, vector<int> &b)
{
    // code here
    set<int> st = {a.begin(), a.end()};
    st.insert(b.begin(), b.end());
    return st.size();
}