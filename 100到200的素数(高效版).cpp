#include <stdio.h>
#include <math.h>
int main(void)
{
	int i = 0;
	int count = 0;
	for(i=100;i<=200;i++)
	{
		int j = 0;
		for(j=2;j<=sqrt(i);j++)   //m = a * b
		{                         //a或b <= 开平方m 
			if(i%j == 0)
			{
				break;
			}
		}
		if(j > sqrt(i))
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\ncount = %d\n",count);
	return 0;
}
