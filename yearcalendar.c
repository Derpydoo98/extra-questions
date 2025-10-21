#include <stdio.h>
 
void eachmonth (int year , int month);
void calendar(int year);
int yeardays (int year);
int monthdays (int year , int month);



int main()
{
    printf("This programme is designed for outputing the calendar for one year.\n");
    printf("Now please input the year you wanna query.\n");
    int year;
    scanf("%d",&year);
    
    if (year < 1900)
    {
        printf("the year should be above 1900\n");
    }
    else
    {
        calendar(year);
    }
    return 0;
}

void calendar (int year)
{
    for(int i = 1;i <= 12;i++)
    {
        eachmonth (year , i);
        printf("\n");
        printf("\n");
    }

}

inline void eachmonth (int year , int month)
{
    long daysofar = 0;
    for (int i = 1900;i <= year - 1;i++)
    {
        daysofar += yeardays(i);
    }
    for (int i = 1;i <= month - 1;i++)
    {
        daysofar += monthdays(year , i);
    }
    int weekday1st = daysofar % 7 + 1;
    printf("     %d年%d月\n",year,month);
    printf("日 一 二 三 四 五 六\n");
//7-1-0,1-2-3,2-3-6,6-7-18
    if(weekday1st == 7) weekday1st = 0;
    for (int i = 1;i <= weekday1st * 3;i++)
    {
        putchar(' ');
    }
    int monthdaynow = monthdays(year , month);//避免在接下来的循环中重复调用monthdays
    for (int i = 1;i <= monthdaynow;i++)
    {
        printf("%2d ",i);
        if((i + weekday1st) % 7 == 0 && i != monthdaynow) printf("\n");
    }
}


//define different days in a year
inline int yeardays (int year)
{
    if (year%4==0&&year%100!=0||year%400==0) return 366;
    else return 365; 
}

//define different days in a month
inline int monthdays (int year , int month)
{
    if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0)&&month == 2) month = 0;
    switch(month)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12: return 31;
        case 4:case 6:case 9:case 11: return 30;
        case 0: return 29;
        default: return 28;
    }
}