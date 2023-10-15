#include<stdio.h>
int main()
{
    int corr_pass=1999;
    int a;
    while (scanf("%d",&a) != EOF)
    {
        if (a == corr_pass)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
        
    }
    
    return 0;
}