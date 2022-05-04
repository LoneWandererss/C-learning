#include <stdio.h>
void mikado(int);
int main(void)
{
	int pooh = 2;
	int bath = 5;
	printf("In main(),pooh = %d and &pooh = %p\n",pooh,&pooh);
	printf("In main(),bath = %d and &bath = %p\n",bath,&bath);
	mikado(pooh);
	return 0;
}
void mikado(int bah)
{
	int pooh = 10;
	printf("In mikado(),pooh = %d and &pooh = %p\n",pooh,&pooh);
	printf("In mikado(),bah = %d and &bah = %p\n",bah,&bah);
}
