#include <stdio.h>

#define LIMIT 100

int
main(int argc, char **argv)
{

	int sumOfSquares = 0;
	int squareOfSums = 0;
	int tempSum = 0;

	for(int i = 1; i <= LIMIT; i++)
	{
		sumOfSquares += i * i;
		tempSum += i;
	}

	squareOfSums = tempSum * tempSum;

	printf("The difference is: %d\n", squareOfSums - sumOfSquares);

	return 0;
}
