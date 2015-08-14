#include <stdio.h>

#define N 600851475143L
int
main(int argc, char **argv)
{

	unsigned long target = N;
	unsigned long x = 1;
	
	while(target != 1)
	{
		x++;
		while (target % x == 0)
		{
			target /= x;
			printf("%lu\n", x);
		}
	}

	return 0;
}
