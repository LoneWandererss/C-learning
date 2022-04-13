#include <stdio.h>
int main(void)
{
	int count = 0;
	int i = 0;
	for(i=1;i<=100;i++)
	{
		if(i%10 == 9)
		{
			count++;  //个位
		}
		if(i/10 == 9)
		{
			count++;  //十位
		}
	}
	printf("count = %d\n",count);
	return 0;
}
