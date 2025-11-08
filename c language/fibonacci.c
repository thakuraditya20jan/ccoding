#include <stdio.h>
  
// write a program to print the Fibonacci series

int main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    

    int a = -1, b = 1, c;
    for(int x = 1; x<= n; x++)  {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
    
    printf("\n");
    return 0; 
}