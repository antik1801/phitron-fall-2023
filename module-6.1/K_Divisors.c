#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int mid = n/2;
    for (int i = 1; i <=mid; i++)
    {
        if (n%i == 0)
        {
            printf("%d\n", i);
        }
        
    }
    printf("%d",n);
    
    return 0;
}