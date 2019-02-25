#include <stdio.h>
#include <stdlib.h>

void main()
{   
    int input, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &input);

    for(i = 0; i < input; i++)
    {
        if (i % 5 == 0 || i % 3 == 0)
        {
            sum += i;
        }
    }

    printf("The sum of all multiples of 3 and 5 below %d is: %d", input, sum);
}