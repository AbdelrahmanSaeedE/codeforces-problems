#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[1000];
    for(int i=0;i<m;++i){
        cin >> arr[i];
    }
    sort(arr,arr+m);
    int ans=100000000;
    for(int i=0;i<=m-n;++i){
        ans = min(ans,arr[i+n-1]-arr[i]);
    }
    cout << ans << endl;
    return 0;
}
