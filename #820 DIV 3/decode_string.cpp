//https://codeforces.com/contest/1729/problem/B

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
        string s;
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        while(--n){
            cout<<(int)s[n];
        }
    }
    return 0;
}