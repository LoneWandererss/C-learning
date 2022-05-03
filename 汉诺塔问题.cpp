/****************************************************
经典递归问题：  汉诺塔问题
    有A、B、C三根柱子，其中A柱从上到下、从小到大的顺序
摞着10个圆盘。现要按规定将其原封不动的顺序把A柱的圆盘
重新摆放在C柱子上，问：一共需要移动多少次圆盘。

规则一：在小圆盘上不能放大圆盘。 
规则二：在三根柱子之间，一次只能移动一个圆盘。 

公式：F(n+1) = 2F(n) + 1
*****************************************************/               
#include <stdio.h>
int getNum(int n);
int main(void)
{
	int n = 10;
	long long num;
	num = getNum(n);
	printf("汉诺塔中%d片圆盘共移动%d次\n",n,num);
	return 0; 
}
int getNum(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return 2*getNum(n-1)+1;
	}
	return 0;
}
