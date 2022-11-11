// https://codeforces.com/problemset/problem/1272/A

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
        ll a[3];
        for(int i=0; i<3; i++){
            cin>>a[i];
        }
        sort(a,a+3);
        if(a[0]==a[1] && a[1]!=a[2])
        a[2]--;
        else if(a[0]!=a[1] && a[1]==a[2]){
        a[0]++;
        a[1]--;
        a[2]--;
        }
        else if(a[0]!=a[1] && a[1]!=a[2]){
            a[2]--;
            a[0]++;
        }
        cout<<2*(a[2]-a[0])<<"\n";
    }
    return 0;
