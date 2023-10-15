#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]<0)
        {
            arr[i] = 2;
        }
        else if (arr[i]>0)
        {
            arr[i] = 1;
        }
    }
    int j = 0;
    while (j<n)
    {
        printf("%d ", arr[j]);
        j++;
    }
    
    return 0;
}