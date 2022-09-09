#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/** 
 * main -program entry point
 *
 * return -0 if program runs successfuly
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("%d is pisitive\n", n);
	} else if (n == 0) {
		printf("%d is zero\n", n);
	} else {
		printf("%d is negative\n", n);
	}
	return (0);
}
