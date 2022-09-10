#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: using main
* Return: 0 Always
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
<<<<<<< HEAD
        printf("%i is positive\n", n);
=======
    printf("%i is positive\n", n);
>>>>>>> 788edeabe0b996b94133ac29893e18238b763a43
} 
else if (n == 0)
{
        printf("%i is zero\n", n);
}
else if (n < 0)
{
<<<<<<< HEAD
        printf("%i is negative\n", n);
=======
    printf("%i is negative\n", n);
>>>>>>> 788edeabe0b996b94133ac29893e18238b763a43
}
return (0);
}
