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
    printf("%i is positive\n", n);
} else if (n == 0)
{
    printf("%i is zero\n", n);
}
 else if (n < 0)
{
    printf("%i is negative\n", n);
if (n < 0)
{
printf("%d is negative\n", n);
} else if (n == 0)
{
printf("%d is zero\n", n);
} else
{
printf("%d is positive\n", n);

}
return (0);
}
