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
        int n;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        ll sum = 0;
        sum = accumulate(a,a+n,sum); 
        if(sum==n)
        cout<<0<<"\n";
        else if(sum>n)
        cout<<sum-n<<"\n";
        else
        cout<<1<<"\n";
    }
    return 0;
}