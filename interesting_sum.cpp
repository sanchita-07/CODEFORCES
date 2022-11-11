// https://codeforces.com/contest/1720/problem/B
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
        sort(a,a+n);
        cout<<a[n-1]+a[n-2]-a[0]-a[1]<<endl;
    }
    return 0;
}