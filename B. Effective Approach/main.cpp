#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n=0,arr[100009],m=0,V=0,P=0,b=0,c=0;
    cin>>n;
    for(long long i=1;i<=n;i++) cin>>c,arr[c]=i;
    cin>>m;
    while(m--){
        cin>>b;
        V+=arr[b];
        P+=n-arr[b]+1;
        }
    cout<<V<<" "<<P<<endl;
    return 0;
}
