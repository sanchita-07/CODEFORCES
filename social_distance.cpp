#include <bits/stdc++.h>

using namespace std;

int arr(int a[], int n){
    int sum = 0;
    return accumulate(a,a+n,sum);

}

int main(){
    int t;
    cin>>t;
    while(t--){
       int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        int y = *max_element(a,a+n);
        int z = arr(a,n);
        if(m<n || (n+y*2+(z-y))<m)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}