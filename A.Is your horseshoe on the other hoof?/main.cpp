#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int a[4];
    int ans=0;
    for(int i=0;i<4;++i) cin >> a[i];
    sort(a,a+4);
    for(int i=0;i<4;++i){
        for(int j=i+1;j<4;++j){
            if(a[i]==a[j]) ans++,i++;
        }
    }
    cout << ans << endl;
    return 0;
}
