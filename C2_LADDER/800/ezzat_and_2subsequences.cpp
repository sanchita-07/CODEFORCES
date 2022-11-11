// https://codeforces.com/problemset/problem/1557/A

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
        ll sum = 0;  
        double avg = accumulate(a,a+(n-1),sum)/(double)(n-1); 
        double d = avg + (double) a[n-1];
        printf("%0.9lf\n",d);

    }
    return 0;
}