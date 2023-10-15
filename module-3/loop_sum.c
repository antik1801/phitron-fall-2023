#include <stdio.h>

int main() {
    //code
    long long int sum = 0;
    int n ;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
            sum += i;
            // printf("%d %d \n", i , sum);
    }

    printf("%lld", sum);
       
    return 0;
}