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
        string s;
        cin>>s;
        string y ="YES"; 
        for(int i=0; i<3; i++){
        if(s[i]>='a'){
            s[i]-=32;
        }
        }
        if(s==y){
            cout<<"YES"<<"\n";
        }
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}