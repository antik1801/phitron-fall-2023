#include<stdio.h>
int main()
{
    int arr[10];
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        arr[i] = i+1;
    }
    printf("%d", arr[4]);
    
    return 0;
}