#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int st = 1;
    while (st <= n)
    {
        sum ++;
        st += 2;
    }
    int row = 5+sum;
    int star = 1;
    int space = row - 1;
    for (int i = 0; i < row; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        if(i <= row-1) printf("\n");
        star+=2;
        space --;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
       if(i < 5-1)  printf("\n");
    }
    
        
    return 0;
}