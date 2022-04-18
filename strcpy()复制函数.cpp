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

