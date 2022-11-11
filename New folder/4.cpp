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
     long int n;
     cin>>n;
     long int a[n];
     for(long int i=0; i<n; i++)
     cin>>a[i];
     vector<int> b;
    for(int i=n-1; i>=0; i--){
      if(b.size()%2!=0){
    //   insert to right or left of arr b
      b.insert((b.size()/2)+1,a[i]);
      }
    //   b.push_back(a[i]);
      else
    //   insert in middle of arr b
    b.insert(b.size()/2,a[i]);
    
    }


    //  vector<int>c;  
    }
    return 0;
}