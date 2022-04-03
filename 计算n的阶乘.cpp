#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	printf("求n的阶乘！n = ",n);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ret = ret*i;
	}
	printf("结果为：%d \n",ret);
	return 0;
}
