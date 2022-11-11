#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin>>n>>q;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)
    cin>>a[i];
    sort(a,a+n,greater<ll>());
    for(ll i=0; i<n; i++){
            b[i]= a[n-i-1];
        }
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        ll sum = 0;
         cout<< accumulate(b,b+y,sum)<<"\n";
    }
    return 0;
}
