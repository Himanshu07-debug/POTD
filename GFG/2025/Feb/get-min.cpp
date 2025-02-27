class Solution {
public:
    stack<pair<int, int>> st;
    int min_val = INT_MAX;
    Solution() {
        // code here
    }

    // Add an element to the top of Stack
    void push(int x) {
        // code here
        st.push({x, min_val});
        min_val = min(min_val,x);
    }

    // Remove the top element from the Stack
    void pop() {
        // code here
        if(st.empty()) return;
        min_val = st.top().second;
        st.pop();
    }

    // Returns top element of the Stack
    int peek() {
        // code here
        if(st.empty()) return -1;
        return st.top().first;
    }

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if(st.empty()) return -1;
        return min_val;
    }
};