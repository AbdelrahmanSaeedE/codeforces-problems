#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,ar[105],sum=0;
    cin >>n>>m;
    for(int i=0;i<n;i++) cin>>ar[i];
    vector<int> myar(ar,ar+n);
    sort(myar.begin(),myar.begin()+n);
    for(int i=0;i<m;i++){
        if(myar[i]<0){
            sum+=abs(myar[i]);
        }
    }
    cout<<sum<<endl;
    return 0;
}
