#include <stdio.h>

int recursive_fibonacci(int number)
{
    if (number <= 0)
    {
        return (0);
    }
    else if (number == 1)
    {
        return (1);
    }
    else{
        return (recursive_fibonacci(number-1) + recursive_fibonacci(number-2));
    }
}

int main (void)
{
    int number = 0;
    int result;

    scanf("%d",&number);
    result = recursive_fibonacci(number);
    printf ("%d",result);
    return (0);
}
