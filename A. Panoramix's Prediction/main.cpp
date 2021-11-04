#include <bits/stdc++.h>
typedef long long ll;
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define dbg2(x,y) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<endl
#define dbg3(x,y,z) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<endl
#define dbg4(x,y,z,q) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<", "<<#q<<" = "<<q<<endl
using namespace std;

int main()
{
    int pm[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n=0,m=0;
    cin >>n>>m;
    bool ans=0;
    for(int i=0;i<14;++i){
        if(n==pm[i]&&m==pm[i+1]) ans=1;
    }
    ans ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}
