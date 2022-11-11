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
        int sum = 0,m=0;
        int n = s.length();
        for(int i=0; i<n; i++){
            sum = sum + (s[i]-96);
        }
        if(s[0]<s[n-1])
        m = s[0];
        else
        m = s[n-1];
        if(n==1)
        cout<<"Bob"<<" "<<(m-96)<<endl;
        else if(n%2==0)
        cout<<"Alice"<<" "<<sum<<endl;
        else
        cout<<"Alice"<<" "<<(sum - 2*(m-96))<<endl;
    }
    return 0;
}