#include <stdio.h>
#include <stdlib.h>

#define THRESHOLD 4 * 1000 * 1000
void
fib_next(unsigned *cur, unsigned *prev);

int
main(int argc, char **argv)
{

	unsigned long sum = 0;
	unsigned previous = 1;
	unsigned current = 1;

	while(current < THRESHOLD)
	{
		if (current % 2 == 0) sum += current;
		fib_next(&current, &previous);
	}

	printf("%lu\n", sum);
	return 0;
}

void
fib_next(unsigned *cur, unsigned *prev)
{
	unsigned temp = *cur;
	*cur += *prev;
	*prev = temp;
}
