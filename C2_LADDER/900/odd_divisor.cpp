// https://codeforces.com/problemset/problem/1475/A

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
        ll n;
        cin>>n;
        while(n>1){
            if(n%2!=0){
                cout<<"YES"<<"\n";
                break;
            }
            n/=2;
        }
        if(n==1)
        cout<<"NO"<<"\n";
    }
    return 0;
}