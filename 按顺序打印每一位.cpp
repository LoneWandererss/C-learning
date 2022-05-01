#include <stdio.h>
void print(int n);
int main(void)
{
	unsigned int num = 0;
	scanf("%d",&num);
	print(num);
	printf("\n");
	return 0;
}
void print(int n)
{
	if(n > 9)
	{
		print(n / 10);
	}	
	printf("%d ",n%10);
}
