
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       bool check = true;
       sort(s.begin(),s.end());
       for(int i=0; i<s.length(); i++){
           if(s[i+1]==s[i+2] && s[i]!=s[i+1]){
           check = false;
           break;
           }
       } 
       if(check)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
    return 0;
}