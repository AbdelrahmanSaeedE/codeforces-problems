#include <bits/stdc++.h>

using namespace std;


int main()
{
    string s;
    cin >> s;
    int a[26]={0},odd=0,even=0;
    for(int i=0;i<s.size();++i){
        a[s[i]-'a']+=1;
    }
    for(int i=0;i<26;++i){
        if(a[i]%2!=0){
            odd+=a[i];
        }
        else{
            even+=a[i];
        }
    }
    if(odd%2!=0 || odd==0) cout << "First" << endl;
    else cout << "Second" << endl;

    return 0;
}
