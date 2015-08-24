#include <stdio.h>

#define ArraySize(arr) sizeof(arr)/sizeof(arr[0])

int
main(int argc, char **argv)
{


	int num[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	
	int candidate = 0;
	int threshold = 0;

	while(threshold != ArraySize(num))
	{
		candidate++;
		for(int i = 0; i < ArraySize(num); i++)
		{
			if(candidate % num[i] == 0)
			{
				threshold++;
			}
			else
			{
				threshold = 0;
				break;
			}
		}
	}

	printf("The number we are looking for is %d\n", candidate);



	return 0;
}



