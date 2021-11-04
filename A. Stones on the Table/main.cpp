#include <bits/stdc++.h>
typedef long long ll;
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define dbg2(x,y) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<endl
#define dbg3(x,y,z) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<endl
#define dbg4(x,y,z,q) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<", "<<#q<<" = "<<q<<endl
using namespace std;

int main()
{
    int n=0,ans=0,x=0;
    string st;
    cin>>n;
    cin>>st;
    x=st.length();
    for(int i=x-1;i>0;--i){
        if(st[i]==st[i-1]){
            ++ans;
            st.erase (st.begin()+i-1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
