#include <stdio.h>
int main()
{
	char possword[20] = {0};
	printf("请输入密码：>");
	scanf("%s",possword);        //不用&，数组名就是首地址！ 
	getchar();                   //清空缓冲区！ 
	printf("确认密码(Y/N)：>");
	int ch = getchar();         //getchar()用来接收字符（一个个接收！） 
	if(ch == 'Y')
	{
		printf("确认成功！\n");
	}
	else
	{
		printf("确认失败！\n");
	}
	return 0 ;
}
