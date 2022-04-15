#include <stdio.h>
int main(void)
{
	int i = 0;
	double sum = 0.0;
	for(i=1;i<=100;i++)
	{
		sum += 1.0/i;
	}
	printf("%lf\n",sum);
	return 0;
}
