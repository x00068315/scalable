#include <stdio.h>
void test(int value);
void myfunction (int value);

int main (int argc, char** argv){
int data[1000]; // create array
test(5);
printf("The end of the main\n");
myfunction(10);


}


//this function returns niothing and takes no parameters
//and takes one parameter and integer
void test(int value){
	if(value > 10){
	//	printf("That's a big number\n");
}
 

	for(int i = 0; i < 10; i++){
		printf("Hello from the loop\n");
}
 printf("The end of the main\n");
       
}

void myfunction(int value){
   if(value < 10) {
    value = 100;}
   else {
   value = 200;
}
}
