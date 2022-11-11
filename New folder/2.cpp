#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
    if(s[0]<s[1])
       cout<<26*(s[0]-'a')+(s[1]-'a')-(s[0]-'a')<<endl;
       else if(s[0]==s[1])
       continue;
     else
     cout<<26*(s[0]-'a')+(s[1]-'a')-(s[0]-'a'-1)<<endl;
        
    }
    return 0;
}