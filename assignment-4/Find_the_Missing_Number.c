#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int mul;
    long long int a, b, c;
    scanf("%lld %lld %lld %lld",&mul, &a, &b, &c);
    int mul1 = a * b * c;
    if (mul % mul1 == 0)
    {
        printf("%lld", mul / mul1);
    }
    else
    {
        printf("-1");
    }   
    printf("\n");
    }
    return 0;
}