#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum,temp;
        cin>>n;
        temp = n;
        for (sum = 0; n > 0; sum += n % 10, n /= 10);
        while(temp%sum!=0){
            temp++;
        for (sum = 0; temp > 0; sum += temp % 10, temp /= 10);    
        }
        cout<<temp<<endl;
         int y = __gcd(temp,sum);
        //     while(__gcd(temp,sum)==1){
        //         temp++;
        //     }
        //     cout<<temp<<" "<<sum<<endl;
    }
    return 0;
}