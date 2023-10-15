#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {   
        if (i == n-1)
        {
            printf("%d. I Want More Assignments", i+1);
            break;
        }
        
        printf("%d. I Want More Assignments\n", i+1);
    }
    
    return 0;
}