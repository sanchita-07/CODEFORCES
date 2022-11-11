#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0; i<2*n; i++){
            cin>>a[i];
        }
        int count = 0;
        for(int i=0; i<2*n; i++){
            if(a[i]%2!=0){
                count++;
            }
        }
        if(count == n){
            cout<<"YES"<<"\n";
        }
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}