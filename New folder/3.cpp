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
        string d;
        cin>>d;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s=="a")
        cout<<1<<endl;
        else if(binary_search(s.begin(),s.end(),'a'))
        cout<<-1<<endl;
        else{
           cout<<(ll)pow(2,d.length())<<endl;
        }
    }
    return 0;
}

 // long long int sum = 0;
            // for(int i=0; i<=d.length();i++){
            // sum += tgamma(d.length()+1)/(tgamma(d.length()+1-i)*tgamma(i+1));
            // }
            //  cout<<sum<<endl;