#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void head()
{
	printf("***�²�1 ~ 10������****\n");
	printf("***********************\n");
	printf("**** 1.play  0.exit****\n");
	printf("***********************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%10+1;    //����1~10������� 
	while(1)
	{
		printf("������²�����֣�->");
 		scanf("%d",&guess);
		if(guess > ret)
		{
			printf("�´��ˣ�����һ�ΰɣ�\n");
		}
		else if(guess < ret)
		{
			printf("��С�ˣ�����һ�ΰɣ�\n"); 
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break; 
		}
	}	
}
int main()
{
	int input =0;
	srand((unsigned int)time(NULL));    //���������seed 
	do
	{
		head();
		printf("��ѡ��->");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ����\n");
				break;
			default:
				printf("�����ʽ����\n");
				break;
		} 
	}while(input);      //�Ƚ�����򣬺�ѭ���� 
	return 0;
}
