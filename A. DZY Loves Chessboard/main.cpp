#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , m ;
    char a[11000];
    cin >> n >> m ;
    for(int i=0;i<n;i++){
        cin >> a;
        for(int j=0;j<m;j++){
            if(a[j]=='.'){
                if((i+j)&1) a[j]='W';
                else a[j]='B';
            }
        }
        cout << a <<endl;
    }
    return 0;
}
