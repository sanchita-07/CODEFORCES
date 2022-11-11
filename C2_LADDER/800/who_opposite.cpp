// https://codeforces.com/problemset/problem/1560/B

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
        ll a,b,c;
        cin>>a>>b>>c;
        ll mn = min(a,b);
        ll mx = max(a,b);
        ll dif = mx - mn;
        if(mx>= 2*mn && c<=2*dif){
            if(c<=dif){
                cout<<c + dif<<"\n";
            }
            else{
                cout<< c - dif<< "\n";
            }
        }
        else{
            cout<< "-1"<<"\n";
        }
    }
    return 0;
}