#include <stdio.h>
#include <stdlib.h>

unsigned int fib(unsigned int);

void main()
{   
    int num, i = 0, sum = 0, f = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (f < num)
    {   
        f = fib(i);
        if(f % 2 == 0)
        {
            sum += f;
        }
        i++;
    }

    printf("The sum of the even valued terms in the fibonnaci sequence that does not exceed %d is: %d\n", num, sum);
}   

unsigned int fib(unsigned int n)
{
    if(n == 0 || n == 1)
        return n;   
    else 
        return fib(n-1) + fib(n-2);
}