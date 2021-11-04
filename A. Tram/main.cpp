#include <bits/stdc++.h>
typedef long long ll;
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define dbg2(x,y) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<endl
#define dbg3(x,y,z) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<endl
#define dbg4(x,y,z,q) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<", "<<#q<<" = "<<q<<endl
using namespace std;

int main()
{
    int n=0,a=0,b=0,c=0,ans=0;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a>>b;
        c=(c+b)-a;
        if(c>ans) ans=c;
    }
    cout << ans << endl;
    return 0;
}
