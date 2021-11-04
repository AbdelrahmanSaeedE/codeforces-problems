#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a;
    int o=0,t=0,e=0;
    for(int i=0;i<a.length();i+=1){
       if(a[i]=='1') o++;
       else if(a[i]=='2') t++;
       else if(a[i]=='3') e++;
    }
    bool f=1;
    for(int i=0;i<o;i++){
        if (f) cout<<"1",f=0;
        else cout<<"+1";
        }

    for(int i=0;i<t;i++){
        if(f) cout<<"2",f=0;
        else cout<<"+2";
        }

    for(int i=0;i<e;i++){
        if(f) cout<<"3",f=0;
        else cout<<"+3";}

    cout<<endl;
    return 0;
}
