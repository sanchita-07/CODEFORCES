#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
 
    string s,t;
    cin >> s >> t;
 
    ll int ok = 0;
    for(ll int i=0;i<t.size();i++){
        if(t[i] == 'a') ok = 1;
    }
 
    if(t == "a"){
        cout << 1 << endl;
        return;
    }
 
    if(ok) cout << -1 << endl;
    else cout << (ll)pow(2,s.size()) << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}