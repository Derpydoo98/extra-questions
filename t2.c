#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for (int i=n;i<=n+3;i++)//一行中的所有输出,i表示第一个数字
    {
        for (int k=n;k<=i-1;k++)//这里用循环找第二个数字，先找左边，也就是第二个数字在第一个数字左边的情况，k stands for the second number
        {
           
            for (int t=n;t<=k-1;t++)
            {
                printf("%d ",i*100+k*10+t);
            }
            for (int t=k+1;t<=n+3;t++)
            {
                if(t!=i)
                printf("%d ",i*100+k*10+t);
            }
        }
        for (int k=i+1;k<=n+3;k++)//这里用循环找第二个数字，再找右边，也就是第二个数字在第一个数字右边的情况
        //k stands for the second number
        {
           
            for (int t=n;t<=k-1;t++)//third number,search from the left
            {
                if(t!=i)
                printf("%d ",i*100+k*10+t);
            }
            for (int t=k+1;t<=n+3;t++)//thrid number,search from the right
            {
                printf("%d ",i*100+k*10+t);
            }
        }
        printf("\n");

    }
    return 0;
}