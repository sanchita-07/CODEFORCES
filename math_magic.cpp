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
        ll a,count=0;
        cin>>a;
        for(ll i=0; i<(a+1); i++){
            if((a-i)==(a^i)){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}