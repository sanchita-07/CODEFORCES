#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int y = (r+1)/(b+1);
        for(int j=n; n!=0; ){
        for(int i=1; i<=y;){
        cout<<"R";
        n--;
        if(n==0){
        break;
        }
        i++;
        }
        cout<<"B";
        n--;
        if(n==0){
        break;
        }
        }
        
    }
    return 0;
}