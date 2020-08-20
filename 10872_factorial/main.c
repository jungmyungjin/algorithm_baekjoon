#include <stdio.h>

int recursive_factorial(int result, int number)
{
    if (number - 1 > 0 )
    {
        result = recursive_factorial(result, number - 1);
        result *= number;
    }
    else if ( number == 0 )
    {
        result = 1;
    }
        
    return result;
}

int main (void)
{
    int number;
    int result = 1;
    scanf("%d", &number);

    result = recursive_factorial(result, number);
    printf("%d\n",result);

    return (0);
}
