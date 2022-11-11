#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        char a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        int k,l,min=INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]=='R'){
                    k = j;
                    if(k<min){
                    min = k;
                    l = i;
                }
                }
            }
        }
        bool flag = true;
      for(int i=0; i<l; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]=='R')
                flag = false;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    return 0;
}