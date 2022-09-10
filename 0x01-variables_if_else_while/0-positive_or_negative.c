#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
#include <stdio.h>
=======
>>>>>>> 3220e4884491ab78594aa18db91c9f32eccb82b5

/**
*main - Entry point
*Return: Always
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
if (n > 0)
{
    printf("%i is positive\n", n);
} else if (n == 0)
{
    printf("%i is zero\n", n);
}
 else if (n < 0)
{
    printf("%i is negative\n", n);
=======
if (n < 0)
{
printf("%d is negative\n", n);
} else if (n == 0)
{
printf("%d is zero\n", n);
} else
{
printf("%d is positive\n", n);
>>>>>>> 3220e4884491ab78594aa18db91c9f32eccb82b5
}
return (0);
}
