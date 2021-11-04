#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n,ans;
    cin >> n >> a >> b;
    ans=n-max(a+1,n-b)+1;
    cout<<ans<<endl;

    return 0;
}
