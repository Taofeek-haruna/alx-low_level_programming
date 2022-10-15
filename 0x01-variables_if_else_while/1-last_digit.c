#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/* last digit */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is gteater than 5\n", m);
	}
	return (0);
}
