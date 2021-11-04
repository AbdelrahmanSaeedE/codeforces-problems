#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n+1;i++){
        for(int j=(n*2-i*2);j>0;j--) cout<<" ";
        for(int x=0;x<=i;x++) (x==i) ? cout << x : cout << x <<" ";
        for(int x=1;x<=i;x++) cout << " " << i-x;
        cout <<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<(n*2-i*2)+1;j++) cout<<" ";
        for(int x=0;x<=i;x++) (x==i) ? cout << x : cout << x <<" ";
        for(int x=1;x<=i;x++) cout << " " << i-x;
        cout <<endl;
    }


    return 0;
}
