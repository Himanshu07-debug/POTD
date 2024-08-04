int maxMeetings(int n, int start[], int end[]) {
       vector<pair<int,int>>ans;
        
        for(int i=0;i<n;i++){
            ans.push_back({end[i],start[i]});
        }
        
        sort(ans.begin(),ans.end());
        int cnt=1;
        int last=ans[0].first;
        for(int i=1;i<n;i++){
            if(last<ans[i].second){
                last=ans[i].first;
                cnt++;
            }
        }
        return cnt;
    }