#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					
    if (rand < 0)
        printf("is negative");
    else if (rand > 0)
	        printf("is positive");
    else
	        printf("zero");

     return (0);
}
