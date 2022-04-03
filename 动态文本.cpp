#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "welcom to bit!!!";
	char arr2[] = "################";
	int left = 0;
	//int right = sizeof(arr)/sizeof(arr[0] - 2);
	int right = strlen(arr1) - 1;    //计算在“\0”之前 
	while(left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);     //延时函数，调用windows.h 
		system("cls");   //执行系统命令的一个函数
		                 //调用stdlib.h
						 //cls 清空屏幕 
		left++;
		right--;
	}
	printf("%s\n",arr2);
	return 0;
}
