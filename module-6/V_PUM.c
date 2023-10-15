#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int total = n*4;
    for (int i = 1; i <= total; i++)
    {
        if (i%4 == 0)
        {
            printf("PUM\n");
        }
        else
        {
            printf("%d ", i);
        }
        
    }
    
    return 0;
}