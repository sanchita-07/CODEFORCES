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
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        ll sum = 0;
        for(int i=0; i<n; i++){
            sum +=a[i];
        }
        if(sum>m)
        cout<<sum-m<<"\n";
        else
        cout<<0<<"\n";

    }
    return 0;
}