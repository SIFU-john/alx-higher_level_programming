#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/** betty style doc for function main goes there 
* main - "check intigers"
  * Return: Always (0) 
  */ 
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					
    if (rand < 0){
	    
        printf("%d is positive", n);
    }
    else if (rand > 0)
    {
	    printf("%d is negative", n)
	    }
    else
	        {
			
			printf("%d is is zero", n)
		  
		  }

     return (0);
}
