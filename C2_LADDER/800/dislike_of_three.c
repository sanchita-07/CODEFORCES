#include <stdio.h>

int main()
{
    int t,k,i=1,j=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&k);   
        while(j!=k){
            if(i%3!=0 && i%10!=3)
            j++;
            i++;
        }
        printf("%d\n",i-1);
    }
    return 0;
}
