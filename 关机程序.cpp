#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
	printf("���ĵ��Խ���1���Ӻ�ػ���\n");
	printf("�����롰���������ſ���ȡ���ػ���\n");
	while(1)
	{
		printf("�����룺->");
		scanf("%s",&input);
		if(strcmp(input,"������") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("�����ʽ����������һ�Σ�\n");
		}
	}
	return 0;	
}
