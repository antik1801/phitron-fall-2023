#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n+1];
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = n; i >= 2; i--)
    {
        array[i] = array[i-1];
    }
    array[x] = y;
    int j =0;
    while (j<=n)
    {
        printf("%d ", array[j]);
        j++;
    }
    
    
    return 0;
}