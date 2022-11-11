#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
     int x,y;
     cin>>x>>y;
     int a;
    if(x==y)
     cout<<1<<" "<<1<<endl;
    else if(x<y && y%x==0)
   
    cout<<1<<" "<<y/x<<endl;
    else
     cout<<0<<" "<<0<<endl;
    }
    return 0;
}

   //  a = y/x;
    //  int b = a;
    //  int count=0;
        // for(int i=2; i<sqrt(b); ){
        //     if(a%i==0){
        //         while(a%i==0){
        //         a=a/i;
        //          count++;
        //         if(a==1){
        //         cout<<count<<" "<<i<<endl;
        //         break;
        //         }
        //         }
            //  }
    //  else if(i==sqrt(b))
    //  cout<<0<<" "<<0<<endl;
    //  else
    //  i++;
    //  }
    //  }