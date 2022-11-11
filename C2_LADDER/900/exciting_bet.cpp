// https://codeforces.com/problemset/problem/1543/A

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
        ll a,b;
        cin>>a>>b;
        ll dif = abs(a-b);
        ll mn = min(a,b);
        if(a==b)
        cout<<"0"<<" "<<"0"<<"\n";
        else{
        ll q = mn%dif;
        cout<<dif<< " "<<min(q,dif-q)<<"\n"; 
        }
    }
    return 0;
}