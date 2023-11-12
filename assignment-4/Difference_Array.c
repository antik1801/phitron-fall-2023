#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
      int n;
    scanf("%d", &n);
    int array[n];
    int copy[n];
    int diff[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        copy[i] = array[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1 ; j < n ; j++)
        {
            if (copy[i]> copy[j])
            {
                int tmp = copy[i];
                copy[i] = copy[j];
                copy[j] = tmp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        diff[i] = array[i] - copy[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", abs(diff[i]));
    }
    printf("\n");       
    }    
    return 0;
}