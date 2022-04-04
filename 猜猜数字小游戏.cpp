#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void head()
{
	printf("***猜猜1 ~ 10的数字****\n");
	printf("***********************\n");
	printf("**** 1.play  0.exit****\n");
	printf("***********************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%10+1;    //产生1~10的随机数 
	while(1)
	{
		printf("请输入猜测的数字：->");
 		scanf("%d",&guess);
		if(guess > ret)
		{
			printf("猜大了，再来一次吧！\n");
		}
		else if(guess < ret)
		{
			printf("猜小了，再来一次吧！\n"); 
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break; 
		}
	}	
}
int main()
{
	int input =0;
	srand((unsigned int)time(NULL));    //产生随机数seed 
	do
	{
		head();
		printf("请选择：->");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏程序！\n");
				break;
			default:
				printf("输入格式错误！\n");
				break;
		} 
	}while(input);      //先进入程序，后循环。 
	return 0;
}
