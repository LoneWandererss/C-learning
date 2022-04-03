#include <stdio.h>
int main()
{
	int a = 10;
	int b;
	b = ++a;                //先++，再使用
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	int c = 10;
	int d;
	d = c++;                //先使用，再++
	printf("c = %d\n",c);
	printf("d = %d\n",d);
	return 0;
}
