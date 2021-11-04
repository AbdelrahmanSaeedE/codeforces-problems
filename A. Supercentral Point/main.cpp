#include <iostream>

using namespace std;

int main()
{
    long long n,x[500],y[500],L=0,R=0,U=0,D=0,ans=0;
    cin>>n;
    for(long long i=0;i<n;i++) cin>>x[i]>>y[i];
    for(long long i=0;i<n;i++){
        L=R=U=D=0;
        for(long long j=0;j<n;j++){
            if(x[i]>x[j]&&y[i]==y[j]) D++;
            if(x[i]<x[j]&&y[i]==y[j]) U++;
            if(x[i]==x[j]&&y[i]>y[j]) L++;
            if(x[i]==x[j]&&y[i]<y[j]) R++;
        }
        if(D&&L&&U&&R) ans++;
    }
    cout << ans<<endl;
    return 0;
}
