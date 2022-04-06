#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
	printf("您的电脑将在1分钟后关机！\n");
	printf("请输入“我是猪”，才可以取消关机！\n");
	while(1)
	{
		printf("请输入：->");
		scanf("%s",&input);
		if(strcmp(input,"我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("输入格式错误！请再输一次！\n");
		}
	}
	return 0;	
}
