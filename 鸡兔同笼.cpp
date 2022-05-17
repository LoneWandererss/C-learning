#include <stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	
	printf("请输入头数："); 
	scanf("%d",&a);
	printf("请输入脚数：");
	scanf("%d",&b);
	
	int r = 0;
	int c;
	c = a - r;
	while((4*r + 2*c) < b)
	{
		r = r + 1;
		c = a -r;
		if((4*r + 2*c) == b)
		{
			printf("鸡%d ， 兔%d \n",c,r);
			break;
		}
		if((4*r + 2*c) > b)
		{
			printf("Data error!\n");
			break;
		}
		if(r<0 && c<0)
		{
			printf("Data error!\n");
			break;
		}
	}
}
