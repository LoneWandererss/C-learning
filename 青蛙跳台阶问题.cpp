/**************************************************
                ������̨������
 ����һ�ο�����1��̨�׻���2��̨�� ������n��̨��ʱ
       ���ж�����������
 ���У�1,2,3,5,8.......
       1��̨�ף�2��̨�ף�3��̨�ף�....
       
 ԭ��쳲���������Fibonacci sequence
 ��ʽ��f(n) =  f(n-1) + f(n-2) (n>=2, n��N*)
       f(0) = 0
       f(1) = 1
***************************************************/ 
#include <stdio.h>
unsigned long fibonacci(unsigned n)
{
	//f(n) =  f(n-1) + f(n-2) (n>1, n��N*)
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
	printf("̨��Ϊ %d ʱ�����ܹ� %d ����\n",x,sum);
	return 0;
}
