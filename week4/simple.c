#include <stdio.h>
void test(int value);

float calcAvg (int data[]);
const int size = 1000000;

int main (int argc, char** argv){
	int data[size]; // create array

	/*

	* can this step be parallelized?
I think it can be parallelized here as we can divide the array into even parts and then each part would be filled in 
by a separate thread.
	*/
	for (int i = 0; i < size; i++){
		data[i] = i;

	}

	float avg = calcAvg(data);

	printf("Average is %f\n", avg);


}



float calcAvg (int data[]){
	float avg = 0.0;
	int sum = 0;

	/*
	* can this step be parallelized?
This bit of code can also be parallelized, the same as the code above we can split ti in a smaller parts and 
than add the results dividing by the number of the smaller parts.
	*/
	for (int i = 0; i < size; i++){
		sum +=data[i];
	} 

	avg = sum / size;
	
	return avg;
}

