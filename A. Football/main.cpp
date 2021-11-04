#include <iostream>

using namespace std;

int main()
{
    int n,as=0,bs=0;
    string a,b,c;
    cin>>n;
    while(n--){
        cin>>c;
        if(as==0&&bs==0){
            a=c;
            as++;
        }
        else if(c!=a){
            b=c;
            bs++;
        }
        else if(c==a) as++;
    }
    if(as>bs) cout<<a<<endl;
    else cout<<b<<endl;

    return 0;
}
