#include <stdio.h>

int main()
{
    int i,t;
    long long int n,a[200000];
    scanf("%d",&t);
        while(t--){
            scanf("%lld",&n);
            for(int i=1 ; i<=n ; i++)
                scanf("%lld",&a[i]);
            
    int l1 = a[1];
    int l2 = a[2];
    int temp;
 
    if (l1 < l2)
    {
        temp = l1;
        l1 = l2;
        l2 = temp;
    }
 
    for ( i = 3; i <= n; i++)
    {
        if (a[i] > l1)
        {
            l2 = l1;
            l1 = a[i];
        }
        else if (a[i] > l2)
        {
            l2 = a[i];
        }
    }
    if(n>=2)
    {
    if(l1-l2==1 || l1-l2==0)
    printf("YES\n");
    else
    printf("NO\n");
    }
    else if(n==1 && a[1]==1)
    printf("YES\n"); 
    else
    printf("NO\n");
        }
    return 0;
}