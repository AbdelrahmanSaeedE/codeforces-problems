#include <iostream>

using namespace std;

int main()
{
    string a;
    cin>>a;
    bool ans=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9') ans=1;
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
