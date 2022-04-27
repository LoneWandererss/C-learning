#include <stdio.h>
void up_down(int);
int main(void)
{
	up_down(1);
	return 0;
}
void up_down(int n)
{
	printf("Level %d: n location %p\n",n,&n);
	if(n < 4)
	{
		up_down(n+1);
	}
	printf("LEVEL %d: n loation %p\n",n,&n);
}
