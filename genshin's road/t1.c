#include <stdio.h>

int main()
{
    int a,b,c[4]={0};
    scanf("%d%d",&a,&b);
    for (int i=0;i<=3;i++)
    {
        c[i] = a % b;
        a /= b;
    }
    for(int i=3;i>=0;i--)
    {
        printf("%d",c[i]);
    }
    return 0;
}

