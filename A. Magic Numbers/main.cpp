#include <bits/stdc++.h>

using namespace std;

bool is_magical_num(string num){
    int f=0;
    int l=num.size();
    for(int i=0;i<l;i++){
        if(num[0]!='1'){
            return false;
        }
        if(num[i]=='1'){
            f=0;
        }
        else if(num[i]=='4'){
            f++;
            if(f>=3) return false;
        }
        else if(num[i]!='1'&& num[i]!='4') return false;
    }
    return true;
}

int main()
{
    string a;
    cin>>a;
    if(is_magical_num(a)) cout << "YES"<<endl;
    else cout << "NO"<<endl;
    return 0;
}
