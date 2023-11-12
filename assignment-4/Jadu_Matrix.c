#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m, &n);
    int array[m][n];
    int flag = 1;
    int dig = m-1;
    if (m==n)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &array[i][j]);
            }
            
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j || i + j == m-1)
                {
                    if (array[i][j] != 1)
                    {
                        flag = 0;
                        break;
                    }
                }
                else
                {
                    if (array[i][j] != 0)
                    {
                        flag = 0;
                        break;
                    }
                    
                }
                
                
            }
            
            dig--;
        }
        if (flag == 1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        
    }
    else
    {
        printf("NO");
    }
    return 0;
}