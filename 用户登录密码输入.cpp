/****************************************
ģ���û���¼�龰������ֻ��������������
��������������˳�����
****************************************/ 
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = {0};
	for(i=0;i<3;i++)
	{
		printf("���������룺->",password);
		scanf("%s",password);
		if(strcmp(password,"123456") == 0)
		{
			printf("������ȷ��\n");
			break;
		}
		else
		{
			printf("��������������������룡\n");
		}	
	}
	if(i == 3)
	{
		printf("�������������ѳ������Σ��˳�����\n"); 
	}
	return 0;
}
