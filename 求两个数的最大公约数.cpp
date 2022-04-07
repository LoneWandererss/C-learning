#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf("%d %d",&m,&n);
	while(m%n)
	{
		r = m%n;         //Õ·×ªÏà³ý·¨ 
		m = n;
		n = r;
	}
	printf("%d",n);
	return 0;
}
