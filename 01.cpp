#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        ll count=0, c=0;
        if(n%2!=0){
        for(ll i=0; i<n; i++){
        if(a[i]>a[i+1]){
            a[i]= a[i]*(-1);
            count++;
        }
        }
        }
        else{
        for(ll i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            a[i]= a[i]*(-1);
            count++;
        }
        }
        }

        for(ll i=0; i<n-1; i++){
            if(a[i]<=a[i+1]){
                c++;
            }
        }
        if(count%2==0 && c==n-1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}