#include <stdio.h>
#include <stdlib.h>

void main()
{   
    int input, i, sum = 0, first, second;

    printf("Enter a number: ");
    scanf("%d", &input);

    printf("Pick the first number: ");
    scanf("%d", &first);

    printf("Pick the second number: ");
    scanf("%d", &second);
    
    for(i = 0; i < input; i++)
    {
        if (i % first == 0 || i % second == 0)
        {
            sum += i;
        }
    }

    printf("The sum of all multiples of %d or %d below %d is: %d", first, second, input, sum);
}