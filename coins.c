#include <stdio.h>

int main()
{
    int t;
    long int a,b;
    scanf("%d",&t);
        while(t--){
            scanf("%ld %ld",&a,&b);
            if(a==0)
            printf("1\n");
            else{
            long int s = a*1 + b*2 ;
            printf("%ld\n",s+1);
            }
        }
    return 0;
}