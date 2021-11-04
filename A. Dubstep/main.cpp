#include <iostream>

using namespace std;

int main()
{
    string inp,v_str;
    v_str="WUB";
    cin>>inp;
    size_t found;
    while(inp.find(v_str)!=std::string::npos){
        size_t found=inp.find(v_str);
        if(found==0) inp.erase(found,3);
        else if(found>0){
            if(inp[found-1]==' ') inp.erase(found,3);
            else inp.replace(found,3," ");
        }
    }
    cout<<inp<<endl;
    return 0;
}
