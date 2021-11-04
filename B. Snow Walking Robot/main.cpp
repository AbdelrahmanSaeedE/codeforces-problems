#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string s;
    while(q--){
        cin >> s;
        map<char,int> m;
        for(int i=0;i<s.size();++i){
            m[s[i]]++;
        }
        int mv=min(m['U'],m['D']);
        int mh=min(m['L'],m['R']);
        if(mv==0) mh=min(mh,1);
        if(mh==0) mv=min(mv,1);
        cout << (mv+mh)*2 << endl;
        for(int i=0;i<mv;++i) cout << 'U';
        for(int i=0;i<mh;++i) cout << 'R';
        for(int i=0;i<mv;++i) cout << 'D';
        for(int i=0;i<mh;++i) cout << 'L';
        cout << endl;

    }
    return 0;
}
