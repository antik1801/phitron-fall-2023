#include <stdio.h>

int main() {
    //code
    int A,B;
    int reminder = 1;
    scanf("%d %d", &A, &B);
    if (A >= B)
    {
        reminder = A % B;
    }
    else{
        reminder = B % A;
    }
    if (reminder == 0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    
    return 0;
}

/*
Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

Input
Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

Output
Print the "Multiples" or "No Multiples" corresponding to the read numbers.

Examples
inputCopy
9 3
outputCopy
Multiples
inputCopy
6 24
outputCopy
Multiples
inputCopy
12 5
outputCopy
No Multiples
Note
***A is said to be Multiple of B if B is divisible by A.

First Example :

9 is divisible by 3 , So the answer is: Multiples.

Second Example :

6 is not divisible by 24 but

24 is divisible by 6 , So the answer is: Multiples.

Third Example :

12 is not divisible by 5 and 5 is not divisible by 12.

So the answer is: No Multiples.
*/