#include <stdio.h>
int my_strlen(char * str);
int main(void)
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}
int my_strlen(char * str)
{
	if(*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
