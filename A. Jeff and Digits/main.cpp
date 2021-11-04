#include <iostream>

using namespace std;

int main()
{
    int z=0,f=0,b,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b;
        if(b==5) f++;
        else if(b==0) z++;
    }
    if(z==0) cout<<-1<<endl;
    else if(f<9) cout<<0<<endl;
    else{
        int fs=(f/9)*9;
        for(int i=0;i<fs;i++) cout<<5;
        for(int i=0;i<z;i++) cout<<0;
        cout<<endl;
    }
    return 0;
}
