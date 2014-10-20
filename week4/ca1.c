int main()

{
int i, j, swap;
int n = 10000;
int a[n];
for (int i = 0; i < n; i++){
		a[i] = i;

	}



for (i=1; i < n; i++)
{
	for (j = n -1; j >= i; --j)
	{
		if (a[j] < a[j-1])
			{
			swap = a[j]; 
                        a[j] = a[j-1];
                        a[j-1] = swap;
			}
	}
}

printf("Average is %f\n", swap);
}


  
 

