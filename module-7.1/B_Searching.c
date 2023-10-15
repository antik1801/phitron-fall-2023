#include<stdio.h>
int main()
{
    int n,search;
    int pos = -1;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &search);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            pos = i;
            break;
        }
        
    }
    printf("%d", pos);
    
    return 0;
}