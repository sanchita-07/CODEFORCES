// https://codeforces.com/problemset/problem/1549/A

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
        cout<<n-1<< " "<<(n-1)/2<<endl;
    }
    return 0;
}