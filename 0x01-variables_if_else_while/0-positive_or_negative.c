#include <stdlib.h>

#include <time.h>

#include <stadio.h>

/**
 * main - prints if numbers positive, zero or negative
 * Return: Always (Success)
 *
 */
int main(void)
{
	int n;
	start(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n" , n);
	}
	else if ( n == 0)
	{
		printf("%d is zero\n , n");
	}
	else
	{
		printf("%d is negative\n");
	}
	return (0);
}
