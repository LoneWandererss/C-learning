#include <stdio.h>
void Add(int * p);
int main(void)
{
	int num = 0;
	Add(&num);
	printf("sum = %d\n",num);
	Add(&num);
	printf("sum = %d\n",num);
	return 0;
}
void Add(int * p)
{
	(*p)++;	
}
