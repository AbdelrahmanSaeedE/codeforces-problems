#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    string s,ans;
    cin>>k>>s;
    int c[26]={0};
    if(s.size()%k != 0){
        cout << "-1" <<endl;
        return 0;
    }
    for(int i=0;i<s.size();++i){
        ++c[s[i]-'a'];
    }
    for(int i=0;i<26;++i){
        if(c[i]%k!=0){
            cout << "-1" <<endl;
            return 0;
        }
    }
    for(int i = 0; i < 26; ++i)
    {
        for(int j = 0; j < c[i] / k; ++j)
        {
            ans += char('a' + i);
        }
    }
    for(int i=0;i<k;++i) cout << ans;

    cout<<endl;

    return 0;
}
