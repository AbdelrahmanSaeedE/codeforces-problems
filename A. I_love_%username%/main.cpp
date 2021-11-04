#include <bits/stdc++.h>
typedef long long ll;
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define dbg2(x,y) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<endl
#define dbg3(x,y,z) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<endl
#define dbg4(x,y,z,q) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<", "<<#q<<" = "<<q<<endl
using namespace std;


int main()
{
    int n=0,mn=0,mx=0,ans=0,point[1009];
    cin>>n;
    for(int i=0;i<n;++i) cin>>point[i];
    mn=mx=point[0];
    for(int i=1;i<n;++i){
        if(point[i]>mx) ++ans,mx=point[i];
        else if(point[i]<mn) ++ans,mn=point[i];
    }
    cout << ans << endl;
    return 0;
}
