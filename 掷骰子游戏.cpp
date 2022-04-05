/****************************************
游戏名称：掷骰子
游戏人数：2人 
规则：没人每局分别轮流投掷10次骰子，并将
      每次投出的点数累加 ；胜者加1分，负
	  者不加分，平局不加分。5局之后累计
	  分数最大者获胜，相同为平局。
****************************************/ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int p1 = 0;     //玩家获胜分数 
	int p2 = 0;
	int c1,c2;      //玩家每局10次点数之和 
	int j = 0;
	int i = 0;
	srand((unsigned int)time(NULL));
	for(i=1;i<=5;i++)   //记录5局分数 
	{
		c1 = c2 = 0;    //清空上一局骰子点数 
		for(j=1;j<=10;j++)   //记录每局情况 
		{
			c1 = c1 + rand()%6+1;
			c2 = c2 + rand()%6+1;
		}
		if(c1>c2)
		{
			p1++;
		}
		else if(c1<c2)
		{
			p2++;
		}
	}
	if(p1 > p2)        //判断胜负 
	{
		printf("p1 获胜！\n");
		printf("P1与p2比分为：%d : %d \n",p1,p2); 
	}
	else if(p1 < p2)
	{
		printf("p2 获胜！\n");
		printf("P1与p2比分为：%d : %d \n",p1,p2); 
	}
	else
	{
		printf("！平局！\n");
		printf("P1与p2比分为：%d : %d \n",p1,p2); 
	}
	return 0;		
}

