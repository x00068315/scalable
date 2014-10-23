#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char** argv)

{
int i,j,swap;
int n = 1000;
int array[n];
srand (time(NULL));

	for(int i = 0; i < n; ++i)
	{
		array[i] = rand() % 1000+1;
	}

	printf("Unsorted\n");
		for (i=0; i < n; ++i)
		printf("A[%d] = %d\n",i,array[i]);
 

	for (i=1; i<n; i++)
	{
		for(j = n-1; j>=i; --j)
	{
			if (array[j] < array[j-1])
	{	
				swap = array[j];
				array[j] = array[j-1];
				array[j-1] = swap;
	}
	}
	}	


printf("Sorted\n");
	for (i=0; i<n; ++i)
		printf("B[%d] = %d\n",i,array[i]);





}
