#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=0,day[7],ans=0;
    cin>>n;
    for(int i=0;i<7;i++) cin>>day[i];
    bool t=1;
    while(t){
        for(int i=0;i<7;i++){
            n-=day[i];
            if(n<=0){
                ans=i+1;
                t=0;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
