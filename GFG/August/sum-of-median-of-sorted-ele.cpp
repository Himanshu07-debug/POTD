int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        vector<int>ans;
        int i=0;int j=0;
        while(i<arr1.size() && j<arr2.size())
        {
            if(arr1[i]<=arr2[j])
                ans.push_back(arr1[i++]);
            else{
                ans.push_back(arr2[j++]);
            }
        }
        while(i<arr1.size())
        {
            ans.push_back(arr1[i++]);
        }
        while(j<arr2.size())
            ans.push_back(arr2[j++]);
        
        int index=ans.size()/2;
        return ans[index]+ans[index-1];
        

    }