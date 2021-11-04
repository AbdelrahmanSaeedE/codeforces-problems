#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k,m,ans;
        cin>>n>>k;
        m=((k-1)/(n-1));
        ans=k+m;
        cout<<ans<<endl;
        }
}
