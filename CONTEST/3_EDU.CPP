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
        deque<string> s;
        for(ll i=s.begin(); i!=s.size(); i++){
        s.push_back();
        }
        // cin>>s;
        for(ll i=s.begin(); i<s.size(); i++){
            if(s[i]!=49){
                s.pop_front();
            }
        }
            for(ll i=s.end(); i>0; i--){
            if(s[i]!=49){
                s.pop_back();
            }
            }
            

        



    }
    return 0;
}