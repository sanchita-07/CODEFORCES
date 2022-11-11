#include <stdio.h>

int main()
{
    int t;
    long long int n,s;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&n,&s);
        long long  int j = s / (n*n);
        printf("%lld\n",j);
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int t,n,s;
//     scanf("%d",&t);
//     while(t--){
//         scanf("%d %d",&n,&s);
//         int j=-1, k=0;
//         int i = n*n;
//         while(k<=s){
//             k += i;
//             j++;
//         }
//         printf("%d\n",j);
//     }
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     int t,n,s;
//     scanf("%d",&t);
//     while(t--){
//         scanf("%d %d",&n,&s);
//         int j=0, k=0;
//         int i = n*n;
//         do{
//             k += i;
//             j++;
//         }
//         while(k<=s);
//         printf("%d\n",(j-1));
//     }
//     return 0;
// }