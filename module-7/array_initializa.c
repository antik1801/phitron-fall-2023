#include<stdio.h>
int main()
{
    int ar[5] ={0};
    for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++)
    {
        printf("ar[%d] = %d\n", i, ar[i]);
    }
    
    return 0;
}