#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (i==0)
        {
            printf("%d\n", arr[i]);
            break;
        }
        
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (i == n-1)
        {
            printf("%d\n", arr[i]);
            break;
        }
        
        if (i%2 == 0)     
        {
            printf("%d ",arr[i]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (i%2 == 1)
        {
            printf("%d ", arr[i]);
        }
           
    }
    
    
    
    return 0;
}