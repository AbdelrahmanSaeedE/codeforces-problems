#include <bits/stdc++.h>
typedef long long ll;
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define dbg2(x,y) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<endl
#define dbg3(x,y,z) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<endl
#define dbg4(x,y,z,q) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<", "<<#q<<" = "<<q<<endl
using namespace std;


int main()
{
    string a1,a2;
    char ans[110];
    cin >>a1>>a2;
    int c=a1.length();
    for(int i=c-1;i>=0;--i){
        if(a1[i]==a2[i]) ans[i]='0';
        else ans[i]='1';
    }
    for(int i=0;i<c;i++){
            cout <<ans[i];
    }
    cout <<endl;

    return 0;
}
