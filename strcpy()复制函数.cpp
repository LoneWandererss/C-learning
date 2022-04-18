#include <stdio.h>
#include <string.h>
int main(void)
{
	char arr1[] = "bit";
	char arr2[] = "##########";
	strcpy(arr2,arr1);
	printf("%s\n",arr2);
	return 0;
}
//有“\0”字符串结束标志，后面的###···不打印
//strcpy()会把字符串连同最后的“\0”一起复制。
