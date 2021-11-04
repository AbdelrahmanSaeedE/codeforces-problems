#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long b[1000000];
    long long mn=1000000005, mx=0, cmn=0, cmx=0, ans, n;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> b[i];
        mn=min(mn,b[i]);
        mx=max(mx,b[i]);
    }
    for(int i=0;i<n;++i){
        if(b[i]==mn) cmn++;
        else if(b[i]==mx) cmx++;
    }
    if(mx==mn){
        ans = n*(n-1)/2;
        cout << mx-mn << " " << ans << endl;
    }
    else{
        ans = cmn * cmx;
        cout << mx-mn << " " << ans << endl;
    }
    return 0;
}
