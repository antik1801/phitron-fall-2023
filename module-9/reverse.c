#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int i = 0, j=n-1;
    while (i<j)
    {
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
        i++;
        j--;
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", array[k]);
    }
    
    
    
    return 0;
}