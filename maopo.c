#include <stdio.h>

#define ARRAY_MAX 10

int main()
{
	int i = 0;
	int j = 0;
	int temp = 0;
	int array[ARRAY_MAX] = {20,4,7,1,35,88,32,24,66,5};

	for(i = 0; i < ARRAY_MAX-1;i++)
	{
		for(j = 0;j < ARRAY_MAX - 1-i;j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}

	for(i = 0;i < ARRAY_MAX;i++)
	{
		printf("%d ",array[i]);
	}

	return 0;
}



