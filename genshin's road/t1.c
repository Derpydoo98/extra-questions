#include <stdio.h>

int ten(int n);

int main()
{
    long n;
    int system;
    scanf("%ld%d",&n,&system);


    
    int i=0,t,sum=0;
    while (1)
    {
        t = n%system;
        sum+=t*ten(i);
        i++;
        n/=system;
        if(n==0) break;
    }
    
    if(i<4)
    {
        int k = i;
        for(int i=1;i<=4-k;i++)
        {
            printf("0");
        }
    }
    printf("%ld",sum);

    
    return 0;
}

int ten(int n)
{
    int t=1;
    for(int i=1;i<=n;i++)
    {
        t*=10;
    }
    if(n==0) return 1;
    else return t;
}