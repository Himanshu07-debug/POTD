 int getSecondLargest(vector<int> &arr) {
        // Code Here
        set<int> s(arr.begin(), arr.end());
        if (s.size() < 2) 
        {
            return -1;
        }
        auto it = s.rbegin();
        ++it;
        return *it;
    }