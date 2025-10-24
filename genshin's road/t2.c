#include <stdio.h>

int main()
{
    double a;int numin16;char str[11];double x;
    scanf("%lf,%x,%10s,%lf",&a,&numin16,str,&x);
    printf("%15.0lf\n",a);
    printf("%-15d\n",numin16);
    printf("%15s\n",str);
    printf("%-15.2lf",x);

    
    
    return 0;
}