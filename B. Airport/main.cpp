#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,mn=0,mx=0,a;
    cin >> n >> m ;
    priority_queue<int> qmn,qmx;

    for(int i=0;i<m;i++){
        cin >> a ;
        qmx.push(a);
        qmn.push(-a);
    }
    for(int i=0;i<n;i++){
        mx+=qmx.top();
        a=qmx.top()-1;
        qmx.pop();
        if(a!=0) qmx.push(a);
    }
    for(int i=0;i<n;i++){
        mn-=qmn.top();
        a=qmn.top()+1;
        qmn.pop();
        if(a!=0) qmn.push(a);
    }

    cout << mx << " " << mn;



    return 0;
}
