#include <stdio.h>
#include <math.h>

#define LIMIT 10001

int 
is_prime(int n)
{
	if (n % 2 == 0) return 0;
	int p = 3;
	int limit = (int)sqrt(n) + 1;
	while(p < limit)
	{
		if(n % p == 0) return 0;
		p += 2;
	}

	return 1;
}

int
main(int argc, char **argv)
{

	int count = 1;
	int prime = 2;
	int current = 3;

	while(count < LIMIT)
	{
		if(is_prime(current))
		{
			prime = current;
			count++;
		}
		current += 2;
	}

	printf("The 10.001st prime number is: %d\n", prime);

	return 0;
}
