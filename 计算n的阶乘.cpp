#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	printf("��n�Ľ׳ˣ�n = ",n);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ret = ret*i;
	}
	printf("���Ϊ��%d \n",ret);
	return 0;
}
