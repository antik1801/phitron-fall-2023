#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n, &m);
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &array[i][j]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if (i == n-1)
           {
            printf("%d ", array[i][j]);
           }
           
        }
        
    }
    printf("\n");
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if (j == m-1)
           {
            printf("%d ", array[i][j]);
           }
           
        }
        
    }
    
    return 0;
}