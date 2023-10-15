#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,d,ab,cd;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    ab = pow(a,b);
    cd = pow(c,d);
    if (ab > cd)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}