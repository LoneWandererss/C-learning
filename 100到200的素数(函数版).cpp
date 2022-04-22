#include <stdio.h>
#include <math.h>
int is_prime(int n);
int main(void)
{
	int i = 0;
	for(i=100;i<=200;i++)
	{
		if(is_prime(i) == 1)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
int is_prime(int n)
{
	int j = 0;
	for(j=2;j<=sqrt(n);j++)
	{
		if(n%j == 0)
		{
			return 0;
		}
	}
	if(j > sqrt(n))
	{
		return 1;
	}
}
