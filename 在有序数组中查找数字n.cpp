#include <stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;       //被找数字 
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		if(k == arr[i])
		{
			printf("找到了，下标是%d\n",i);
		}
		if(i == sz)
		{
			printf("找不到\n");
		}
	}
	
	return 0;
}
