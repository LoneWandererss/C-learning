#include <stdio.h>
int main()
{
	int a = 10;
	int b;
	b = ++a;                //��++����ʹ�� 
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	int c = 10;
	int d;
	d = c++;                //��ʹ�ã���++ 
	printf("c = %d\n",c);
	printf("d = %d\n",d);
	return 0;
}
