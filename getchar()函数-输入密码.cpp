#include <stdio.h>
int main()
{
	char possword[20] = {0};
	printf("���������룺>");
	scanf("%s",possword);        //����&�������������׵�ַ�� 
	getchar();                   //��ջ������� 
	printf("ȷ������(Y/N)��>");
	int ch = getchar();         //getchar()���������ַ���һ�������գ��� 
	if(ch == 'Y')
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
	{
		printf("ȷ��ʧ�ܣ�\n");
	}
	return 0 ;
}
