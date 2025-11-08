#include <stdio.h>

// Write a program to print Aarmstrong numbers form 1 to 100 using a funtion

int am(int n)   {
    int temp = n, ans = 0, len;
    for(len = 0; temp; len++, temp/=10);
    temp = n;

    while (temp)    {
        int pow = 1;
        int lastDigit = temp % 10;
        temp /= 10;
        for(int x = 1; x<= len; x++)
            pow = pow * lastDigit;
        
        ans += pow;
    }
    
    return (n == ans);
}

int main()
{
    for(int x = 1; x <= 10000; x++)  
        if(am(x))
            printf("%d ",x);
    
    printf("\n");
    return 0; 
}