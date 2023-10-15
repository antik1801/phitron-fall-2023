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
    int index;
    scanf("%d", &index);
    for (int k = index; k < n; k++)
    {
        array[k] = array[k+1];
    }
    int j = 0;
    while (j<n-1)
    {
        printf("%d ", array[j]);
        j++;
    }
    
    
    return 0;
}