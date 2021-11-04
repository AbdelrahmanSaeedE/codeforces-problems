#include <bits/stdc++.h>

using namespace std;

int main()
{
    string inp,one,zero;
    one="1111111",zero="0000000";
    cin>>inp;
    if(inp.find(one)!=std::string::npos||inp.find(zero)!=std::string::npos){
         cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
