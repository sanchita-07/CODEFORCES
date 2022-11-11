// https://codeforces.com/problemset/problem/318/A

#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    if(n%2){
        if(k<=(n+1)/2){
            cout<<2*k-1<<"\n";
        }
        else{
            cout<<2*(k - (n+1)/2)<<"\n";
        }
    }
    else{
        if(k<=n/2){
           cout<<2*k-1<<"\n"; 
        }
        else{
            cout<<2*(k-(n/2))<<"\n";
        }
    }
    return 0;
}
