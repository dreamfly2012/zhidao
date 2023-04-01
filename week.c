#include "stdio.h"

enum Day
{
    monday = 1,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday,
} day;

int main()
{
    int num;
    printf("请输入一个数字:\n");
    scanf("%d", &num);
    switch (num)
    {
    case monday:
        printf("星期是:%s", "monday");
        break;
    case tuesday:
        printf("星期是:%s", "tuesday");
        break;
    case wednesday:
        printf("星期是:%s", "wednesday");
        break;
    case thursday:
        printf("星期是:%s", "thursday");
        break;
    case friday:
        printf("星期是:%s", "friday");
        break;
    case saturday:
        printf("星期是:%s", "saturday");
        break;
    case sunday:
        printf("星期是:%s", "sunday");
        break;

    default:
        printf("请输入1-7之间的数字");
    }
    return 0;
}