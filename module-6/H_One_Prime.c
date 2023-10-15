#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int root;
    int count=0;
    scanf("%d", &a);
    root = sqrt(a);
    if (a==1)
    {
        printf("NO\n");
    }
    else
    {
        for (int i = 2; i <= root; i++)
        {
           if (a%i == 0)
           {
            count++;
           }
           
        }
        if (count == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

        
    }
    
    return 0;
}