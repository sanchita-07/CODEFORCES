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
        float n;
        cin>>n;
        string s;
        cin>>s;
        int count = 0;
        int c = ceil(n/2);
       for(int i=1; i<=n/2; i++){
           if(s[c]!=s[c-i]){
               break;
           }
           count++;
       }
        for(int i=1; i<=n/2; i++){
           if(s[c]!=s[c+i]){
               break;
           }
           count++;
       }
       cout<<count+1<<"\n";
    }
    return 0;
}