#include<stdio.h>
int main()
{
    long long int p,q,r,min;
    long long int bodies=0, two_eyes;
    scanf("%lld %lld %lld", &p,q,r);
    if (p<=q && p<=r)
    {
        bodies = p;
    }
    else if (q<=p && q<=r)
    {
        bodies = q;
    }
    else
    {
        bodies = r;
    }
    
    p = p - bodies;
    q = q - bodies;
    r = r - bodies;
    two_eyes = p/2;
    if (two_eyes >= r)
    {
        bodies = bodies + r;
    }
    else
    {
        bodies = bodies + two_eyes;
    }
    
    printf("%lld", bodies);
    return 0;
}