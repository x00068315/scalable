#include <stdio.h>
int main (int argc, char** argv)

{
int i, j, swap;
int n = 10000;
int array[n];
for (int i = 0; i < n; i++){
		array[i] = i;

	}

printf("forward\n");
  for (i = 0; i < n; ++i) 
    printf("A[%d] = %d\n",i,array[i]);

for (i=1; i < n; i++)
{
	for (j = n -1; j >= i; --j)
	{
		if (array[j] < array[j-1])
			{
			swap = array[j]; 
                        array[j] = array[j-1];
                        array[j-1] = swap;
			}
	}
}
printf("forward\n");
  for (i = 0; i < n; ++i) 
    printf("A[%d] = %d\n",i,array[i]);

  printf("\nbackward\n");
  for (i = n; i >= 0; --i) 
    printf("A[%d] = %d\n",i,array[i]);
}


  
 

