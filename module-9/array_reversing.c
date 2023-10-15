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
    
    int i = 0, j = n-1;
    int tmp;
    while (i<j)
    {
        tmp = array[i];
        array[i] = array [j];
        array[j] = tmp;
        i++;
        j--;
    }
    

    int l=0;
    while (l<n)     
    {
        printf("%d ", array[l]);
        l++;
    }
    
    return 0;
}