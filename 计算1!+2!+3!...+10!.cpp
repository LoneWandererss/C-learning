#include <stdio.h>
//普通版
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for(n=1;n<=10;n++)
	{
		ret = 1;
		for(i=1;i<=n;i++)
		{	
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("sum = %d",sum);
	return 0;
}

//改进代码
/*
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for(n=1;n<=10;n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum = %d\n",sum);
	return 0;
}
*/
