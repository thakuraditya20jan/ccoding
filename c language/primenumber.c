#include <stdio.h>

// write a program to check whether the entered number is prime or ot using function

int isPrime(int n)  {
    for(int x = 2; x <= n/2; x++)   {
        if(n % x == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    isPrime(n) ? printf("Prime Number") : printf("Not Prime Number");

    printf("\n");

    // if(isPrime(n))
    //     printf("Prime Number");
    // else
    //     printf("Not Prime Number");
    
    printf("\n");
    return 0; 
}