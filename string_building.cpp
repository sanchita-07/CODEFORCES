#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int flag = 0;
        cin>>s;
        
        for(int i=0; i<s.length()-1; i++){
            if(s[i]!=s[i+1] && s[i+1]!=s[i+2]){
                flag = 1;
            }
        }
        if(s[0]!=s[1])
        flag = 1;
        if(flag==1 || s.length()==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}