#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int year, month, days;
    year = n/365 ;
    days = n - year*365;
    month = days/30;
    days = days - month*30;
    printf("%d years\n%d months\n%d days", year, month, days);
    return 0;
}