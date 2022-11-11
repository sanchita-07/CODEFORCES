#include<iostream>
#define ll long long
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<=n;){
        int min = INT_MAX;
        for(int j=k; j!=0; j--){
            if(min>a[++i]){
                min = a[i];
                if(i==n){
                    break;
                }
            }
        }
            cout<<min<<endl;        
        }
    return 0;
}