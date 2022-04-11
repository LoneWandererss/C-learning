#include <stdio.h>
int main(void)
{
	int i = 0;
	int count = 0;
	for(i=100;i<=200;i++)
	{
		int j = 0;
		for(j=2;j<i;j++)    //ÊÔ³ý·¨ 
		{
			if(i%j == 0)
			{
				break;
			}
		}
		if(j == i)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\ncount=%d\n",count);
	return 0;
}
