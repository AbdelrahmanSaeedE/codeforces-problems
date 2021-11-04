#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n,cities[1000000],mn=1000005500,reb=0,indx;
    cin>>n;
    for(long i=1;i<=n;i++){
        cin>>cities[i];
        if(mn>cities[i]) mn=cities[i],indx=i,reb=0;
        else if(mn==cities[i]) reb++;
    }
    if(reb==0) cout << indx << endl;
    else cout << "Still Rozdil" << endl;


    return 0;
}
