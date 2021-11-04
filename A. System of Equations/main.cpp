#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,a,b,ans=0;
    cin>>n>>m;
    for(long long i=0;i<m+n;i++){
        for(long long j=0;j<m+n;j++){
            a=(i*i)+j;
            b=(j*j)+i;
            if(a==n&&b==m) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
