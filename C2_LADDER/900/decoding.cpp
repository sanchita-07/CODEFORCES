// https://codeforces.com/problemset/problem/746/B

#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=n-2; i>=0; i-=2){
            cout<<s[i];
        }
        if(s.length()%2){
            for(int i=0; i<n; i+=2){
            cout<<s[i];
        }
        }
        else{
            for(int i=1; i<n; i+=2){
            cout<<s[i];
        }
    }
    return 0;
}