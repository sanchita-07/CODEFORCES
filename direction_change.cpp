#include <iostream>

using namespace std;

int main(){
    long int t;
    cin>>t;
    while(t--){
      long int n,m;
        cin>>n>>m;
       long x = min(n,m);
       long y = max(n,m);
       if((x==1 || y==1) && (y-x)>=2)
       cout<<"-1"<<endl;
    else if((y-x)%2==0)    
    cout<<2*(x-1) + (y-x)*2<<endl;
    else
    cout<<2*(x-1) + (y-x)*2 - 1<<endl;
    }
}