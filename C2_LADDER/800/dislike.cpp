#include <iostream>

using namespace std;

int main(){
    int t,k;
    cin>>t;
    while(t--){
        int i=1,j=0;
        cin>>k;
        while(j!=k){
            if(i%3!=0 && i%10!=3)
            j++;
            i++;
        }
        cout<<i-1<<endl;
    }
    return 0;
}