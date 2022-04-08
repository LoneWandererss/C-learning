/****************************************
模拟用户登录情景，并且只能输入三次密码
如果超过三次则退出程序。
****************************************/ 
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = {0};
	for(i=0;i<3;i++)
	{
		printf("请输入密码：->",password);
		scanf("%s",password);
		if(strcmp(password,"123456") == 0)
		{
			printf("密码正确！\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入密码！\n");
		}	
	}
	if(i == 3)
	{
		printf("输入有误密码已超过三次，退出程序！\n"); 
	}
	return 0;
}
