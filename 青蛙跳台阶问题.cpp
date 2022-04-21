/**************************************************
                青蛙跳台阶问题
 规则：一次可以跳1个台阶或者2个台阶 ，当有n个台阶时
       共有多少种跳法？
 数列：1,2,3,5,8.......
       1个台阶，2个台阶，3个台阶，....
       
 原理：斐波那契数列Fibonacci sequence
 公式：f(n) =  f(n-1) + f(n-2) (n>=2, n∈N*)
       f(0) = 0
       f(1) = 1
***************************************************/ 
#include <stdio.h>
unsigned long fibonacci(unsigned n)
{
	//f(n) =  f(n-1) + f(n-2) (n>1, n∈N*)
	if(n>1)
	{
		return fibonacci(n-1) + fibonacci(n-2);
	}
	//n<=1
	else
	{
		return 1;
	}
}
int main()
{
	unsigned long x = 0;
	unsigned long sum = 0;
	scanf("%d",&x);
	sum = fibonacci(x);
	printf("台阶为 %d 时，青蛙共 %d 跳法\n",x,sum);
	return 0;
}
