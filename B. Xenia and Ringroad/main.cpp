#include <iostream>

using namespace std;

int main()
{
    long long n,m,b,a=1,ans=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>b;
        if(b>=a){
            ans+=b-a;
        }
        else{
            ans+=(n-a)+b;
        }
        a=b;
    }
    cout<<ans<<endl;
    return 0;
}
