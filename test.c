#include <stdio.h>

int monthdays (int year , int month);

int main()
{
    int year , month;
    scanf("%d%d",&year,&month);
    printf("%d",monthdays(year , month));
    return 0;
}
inline int monthdays (int year , int month)
{
    if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0)&&month == 2) month = 0;
  
    switch(month)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12: return 31;
        case 0: return 29;
        case 4:case 6:case 9:case 11: return 30;
        default: return 28;
    }

}