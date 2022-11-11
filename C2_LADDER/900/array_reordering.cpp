// https://codeforces.com/problemset/problem/1535/B

#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        sort(a, a+n);
        ll count = 0;
        for(int i=0; i<n; i++){
            for(int j=n-1; j>i; j++){
                if(__gcd(a[i],2*a[j]) > 1){
                    count++;
                }        
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}