#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n=0,m=0,st_arr[105],indx=0,def=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>st_arr[i];
        if(ceil(st_arr[i]/m)>=def){
            def=ceil(st_arr[i]/m);
            indx=i+1;
        }
    }
    cout<<indx<<endl;
    return 0;
}
