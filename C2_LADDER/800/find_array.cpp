// https://codeforces.com/problemset/problem/1550/A

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
        int n;
        cin>>n;
        cout<<ceil(sqrt(n))<<endl;
    }
    return 0;
}