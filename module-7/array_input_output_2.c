#include<stdio.h>
int main()
{
    int arr[5];
    for (int i = 1; i <= sizeof(arr)/sizeof(arr[0]); i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = 1;
    while (j< sizeof(arr)/sizeof(arr[0]))
    {
        printf("arr[%d] = %d\n", j, arr[j]);
        j++;
    }
    
    
    return 0;
}