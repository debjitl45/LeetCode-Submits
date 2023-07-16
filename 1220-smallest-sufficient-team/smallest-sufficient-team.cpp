class Solution {
public:
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        int n=req_skills.size();
        int m=people.size();

        map<string,int> mp;
        for(int i=0;i<n;i++)
        mp[req_skills[i]]=i;

        vector<vector<int>> v(m);
        for(int i=0;i<m;i++)
        {
            for(string s:people[i])
            {
                v[i].push_back(mp[s]);
            }
        }

        vector<vector<int>> dp((1<<n), vector<int> (m, 1e9+7));
        vector<vector<int>> ans((1<<n), vector<int> (m, -1));

        int first=0;
        dp[0][0]=0;

        for(int i=0;i<m;i++)
        dp[0][i]=0;

        for(int mask = 1; mask < (1<<n); mask ++){
            for(int j = 0 ; j < m; j++){
                int new_mask = mask;
                for(int i = 0; i < (int)v[j].size(); i++){
                    new_mask = new_mask & (~(1 << (v[j][i])));
                }
                if(j == 0 && new_mask != 0){
                    continue;
                }
                if(new_mask == 0){
                    dp[mask][j] = 1;
                    ans[mask][j] = j;
                    continue;
                }
                if(dp[mask][j-1] <= dp[new_mask][j-1]+1){
                    dp[mask][j] = dp[mask][j-1];
                    ans[mask][j] = ans[mask][j-1];
                }
                else{
                    dp[mask][j] = dp[new_mask][j-1]+1;
                    ans[mask][j] = j;
                }
            }
        }
        
        vector<int> answer;
        int mask = (1<<n)-1;
        int cur = ans[mask][m-1];
        int idx = (m-1);
        cout<<dp[mask][idx]<<endl;
        while(mask != 0 && idx >= 0){
            cur = ans[mask][idx];
            if(cur != -1){
                answer.push_back(cur);
                for(int j = 0; j < (int)v[cur].size(); j++){
                    mask = mask & (~(1<<(v[cur][j])));
                }
                
            }
            idx--;
        }
        return answer;

    }
};