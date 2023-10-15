#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int pos_sum = 0, neg_sum =0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            pos_sum = pos_sum + arr[i];
        }
        else
        {
            neg_sum = neg_sum + arr[i];
        }
        
    }

    printf("%lld %lld", pos_sum, neg_sum);
    
    
    
    return 0;
}