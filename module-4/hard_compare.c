#include<stdio.h>
#include<math.h>
int main()
{
    long long int A,B,C,D,first_num,second_num;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    first_num = pow(A,B);
    second_num = pow(C,D);
    printf("%lld %lld", C, D);
    return 0;
}