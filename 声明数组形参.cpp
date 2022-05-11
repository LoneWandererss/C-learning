#include <stdio.h>
#define SIZE 10
int sum(int ar[],int n);  //int * ar 
int main(void)
{
	int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
	long answer;
	answer = sum(marbles,SIZE);
	printf("The total number of marbles is %1d.\n",answer);
	printf("The size of marbles is %2d bytes.\n",sizeof marbles);
	return 0;
}
int sum(int ar[],int n)  //int * ar
{
	int i;
	int total = 0;
	for(i=0;i<n;i++)
	{
		total += ar[i];   //*(ar + i)
	}
	printf("The size of ar is %zd bytes.\n",sizeof ar); //%zd -> sizeof return 
	return total;
}


