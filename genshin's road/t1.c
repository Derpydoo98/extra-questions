#include <stdio.h>

int ten(int n);

int main()
{
    long n;
    int system;
    scanf("%ld%d",&n,&system);
    if(n == 1) printf("0001");
    else if(n==0) printf("0000");
    else{
        long t=1;
        int i=0;
        while(t<=n)
        {
            t*=system;
            i++;
        }
        t/=system;
      
        if(i<4)
    {
        for(int t=1;t<=4-i;t++)
        {
            printf("0");
        }
    }
    for (int k=i;k>=1;k--)
    {

       
       int front = n / t;
       if(front>=10) printf("%c",'A'+front-10);
       else printf("%d",front);
       n%=t;
       t/=system;
    }
    
   
}
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