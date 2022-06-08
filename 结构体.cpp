#include <stdio.h>
struct Book
{
	char name[20];
	short price;
};
int main(void)
{
	struct Book b1 = {"C语言设计",55};
	printf("书名：%s\n",b1.name);
	printf("价格：%d\n",b1.price);
	return 0;
} 
