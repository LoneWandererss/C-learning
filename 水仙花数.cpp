#include <stdio.h>
int main(void)
{
	int sum = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	for(sum=100;sum<1000;sum++)
	{
		a = sum % 10;
		b = (sum / 10) % 10;
		c = sum / 100;
		if((a*a*a + b*b*b + c*c*c) == sum)
		{
			printf("%d\n",sum);
		} 
	}
	return 0;
}
