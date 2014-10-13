#include <stdio.h>
void test(int value);

float calcAvg (int data[]);

int main (int argc, char** argv){
	int data[1000000]; // create array

	for (int i = 0; i< 100000; i++){
		data[i] = i;

	}

	float avg = calcAvg(data);


}

float calcAvg (int data[]){
	float avg = 0.0;
int sum;
int size = 1000000;
	/*
	* what is the algorithm for
	* calculating average?
	*/
for (int i = 0; i < size; i++){
sum +=data[i];
} 

avg = sum / size;
	
	return avg;
}


/**

void ca (int value)

{
 int i, j;
int n = 10000;
int a[n];
for (i=1; i < n; i++)
{
	for (j = n -1; j >= i; --j)
	{
		if (a[j] < a[j-1])
			{
			swap(a[j], a[j-1]);
			}
	}
}
}
**/
