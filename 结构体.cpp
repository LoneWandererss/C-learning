#include <stdio.h>
struct Book
{
	char name[20];
	short price;
};
int main(void)
{
	struct Book b1 = {"C�������",55};
	printf("������%s\n",b1.name);
	printf("�۸�%d\n",b1.price);
	return 0;
} 
