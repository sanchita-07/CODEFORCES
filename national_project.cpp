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
        ll n,g,b;
        cin>>n>>g>>b;
        ll mid;
        if(n%2!=0)
        mid = n/2 +1;
        else
        mid = n/2;
        ll r = mid/g;
        if(g>=mid)
        cout<<n<<"\n";
        else if(g<mid && mid%g==0)
        cout<< (g*r) + b*(r-1)<<"\n";
        else
        cout<< (g*r) + (b*r) + mid%g <<"\n";
    }
    return 0;
}