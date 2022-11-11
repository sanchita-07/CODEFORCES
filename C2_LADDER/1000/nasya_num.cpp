// https://codeforces.com/problemset/problem/1521/A

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
        if(b==1){
        cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
            cout<<a<<" "<<a*b<<" "<<(b+1)*a<<"\n";
        }
    }
    return 0;
}