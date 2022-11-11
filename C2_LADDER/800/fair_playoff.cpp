#include <iostream>

using namespace std;

int main(){
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if((max(a,b)<c && max(a,b)<d) || (max(c,d)<a && max(c,d)<b))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}