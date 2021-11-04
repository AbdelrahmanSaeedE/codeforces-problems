#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a;
    bool u=1;
    vector<vector<int>> seq(100009);
    vector<pair<int,int>> ans;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> a;
        seq[a].push_back(i);
    }
    for(int i=0;i<1e5+9;++i){
       u=1;
       if(seq[i].size()==0) continue;
       else if(seq[i].size()==1){
            ans.push_back({i,0});
       }
       else if(seq[i].size()==2){
            int def=seq[i][1]-seq[i][0];
            ans.push_back({i,def});
       }
       else{
            for(int j=2;j<seq[i].size();++j){
                if(seq[i][j]-seq[i][j-1]!=seq[i][j-1]-seq[i][j-2]){
                    u=0;
                }
            }
            if(u){
                int def=seq[i][1]-seq[i][0];
                ans.push_back({i,def});
            }
       }

    }
    cout << ans.size() << endl;
    for(int i=0;i<ans.size();++i){
        cout << ans[i].first << " " << ans[i].second << endl;
    }


    return 0;
}
