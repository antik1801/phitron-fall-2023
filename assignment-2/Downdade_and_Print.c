#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int b,c;
    scanf("%d %d", &b, &c);
    arr[b] = c;
    for (int i = a-1; i >= 0 ; i--)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}