#include <stdio.h>

int main() {
    //code
    int N,sum_of_digits=0;
    scanf("%d", &N);
    int temp = N;
    while (temp != 0)
    {
        sum_of_digits += temp;
        temp /= 10;
    }
    int unit_digits = N;
    int remain_digits = N/10 - 2*unit_digits;
    if (sum_of_digits % 3 == 0 && remain_digits % 7 == 0)
    {
        printf("%d is divisable by 3", N);
    }
    else
    {
        printf("%d is divisable by 7", N);
    }
    
    

    return 0;
}