#include<stdio.h>
int main()
{
    long long int m,n;
    scanf("%lld %lld", &m, &n);
    int num_1 = m % 10;
    int num_2 = n % 10;
    int sum = num_1 + num_2;
    printf("%d", sum);
    return 0;
}