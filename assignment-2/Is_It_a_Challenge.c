#include<stdio.h>
int main()
{
    int n,initial;
    scanf("%d", &n);
    if (n>0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == n)
            {
                printf("%d", i);
                break;
            }
            
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = n; i <= 0; i++)
        {
            if (i == 0)
            {
                printf("%d", i);
                break;
            }
            
            printf("%d ", i);
        }
    }
    
    return 0;
}