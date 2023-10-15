#include<stdio.h>
int main()
{
    double n;
    scanf("%llf", &n);
    if (n >=0*1.00 && n <= 25*1.00)
    {
        printf("Interval [0,25]");
    }
    else if (n>25*1.00 && n<=50*1.00)
    {
        printf("Interval (25,50]");
    }
    else if (n>50*1.00 && n<=75*1.00)
    {
        printf("Interval (50,75]");
    }
    else
    {
        printf("Interval (75,100]");
    }
    
    return 0;
}