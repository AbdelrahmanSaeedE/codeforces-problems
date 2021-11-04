#include <bits/stdc++.h>

using namespace std;



int main()
{
    long long sx,sy,ex,ey,t;
    string mv;
    cin >> t >> sx >> sy >> ex >> ey;
    cin >> mv;
    long long ans=-1;
    for(int i=0;i<t;++i){
        if(mv[i]=='N' && sy<ey){
            sy++;
        }
        else if(mv[i]=='S' && sy>ey){
            sy--;
        }
        else if(mv[i]=='E' && sx<ex){
            sx++;
        }
        else if(mv[i]=='W' && sx>ex){
           sx--;
        }
        if(sx==ex && sy==ey){
            ans=i+1;
            break;
        }
    }
    cout << ans <<endl;
    return 0;
}
