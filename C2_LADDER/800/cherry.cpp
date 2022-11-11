// https://codeforces.com/problemset/problem/1554/A

#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
        cin>>a[i];
        ll p = 0;
        for(ll i=0; i<n-1; i++){
            if(p < a[i]*a[i+1]){
                p = a[i]*a[i+1];
            }
        }
    cout<<p<<endl;
    }
    return 0;
}