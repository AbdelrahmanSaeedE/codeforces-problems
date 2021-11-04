#include <bits/stdc++.h>

using namespace std;

int main()
{
    double s1,s2,s3,a,b,c,ans;
    cin >> s1 >> s2 >> s3;
    a=sqrt((s1*s2)/s3);
    b=sqrt((s1*s3)/s2);
    c=sqrt((s3*s2)/s1);
    ans=(a+b+c)*4;
    cout << ans << endl;
    return 0;
}
