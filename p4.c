#include <stdio.h>

typedef int bool;

bool
is_palindrome(int x)
{
	int reverse = 0;
	int temp = x;

	while(temp != 0)
	{
		reverse *= 10;
		reverse += temp % 10;
		temp /= 10;
	}

	return reverse == x;
}

int
main(int argc, char **argv)
{
	int max =  1 * 1;
	for(int i = 1; i < 1000; i++)
	{
		for(int j = 1; j < 1000; j++)
		{
			int n = i * j;
			if(is_palindrome(n)) max = max < n ? n : max;
		}
	}

	printf("%d\n", max);

	return 0;
}

