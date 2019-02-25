#include <stdio.h>
#include <stdlib.h>

int fib(int);

void main()
{   
    int num, i = 0, c;

    printf("Enter a number: ");
    scanf("%d", &num);
    for(c = 1; c <= num; c++)
    {
        printf("%d ", fib(i));
        i++;
    }
}   

int fib(int n)
{
    if(n == 0 || n == 1)
        return n;
    else 
        return fib(n-1) + fib(n-2);
}