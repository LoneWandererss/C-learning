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
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
