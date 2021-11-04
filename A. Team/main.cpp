#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=0,ans=0;
    cin>>n;
    while(n--){
        int arr[3],a=0;

        for(int i=0;i<3;i++){
            cin >> arr[i];
            if(arr[i]==1) a++;
        }
        if(a>=2) ans++;
    }
    cout << ans << endl;
    return 0;
}
