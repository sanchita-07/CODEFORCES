#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(r1>=l2 && r2>=l1)
        cout<<max(l1,l2)<<endl;
        else
        cout<<l1+l2<<endl;
    }
    return 0;
}