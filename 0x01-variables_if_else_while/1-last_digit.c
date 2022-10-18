#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determines if the last digit of a random number is greater than 5, less than 6 and not 0 or 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				int k;
				k = n % 10;
				if (k == 0)
				{
					printf("Last digit of %d is %d and is 0\n", n, k);
				}
				else if (k > 5)
				{
					printf("Last digit of %d is %d and is greater than 5\n", n, k);
				}
				else if (k < 6)
				{
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
				}
					return (0);
}
