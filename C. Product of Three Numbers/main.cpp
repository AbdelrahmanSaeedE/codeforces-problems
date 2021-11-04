#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n , a[3]={0} , newn;
        cin >> n;
        int m=0;
        newn=n;
        bool ans=0;
        for(long long i=2;i<sqrt(n)&&m<2;++i){
            if(newn%i==0){
                newn=newn/i;
                a[m]=i;
                m++;
            }
            a[2]=newn;
            if(m==2&&(a[0]*a[1]*a[2])==n&&a[0]!=a[2]&&a[0]!=a[1]&&a[1]!=a[2]) ans=1;

        }
        if(ans){
            cout << "YES" << endl;
            for(int i=0;i<3;++i){
                (i<2) ? cout << a[i] << " " : cout<<a[i] << endl;
        }
        }
        else cout << "NO" << endl;
    }
    return 0;
}
