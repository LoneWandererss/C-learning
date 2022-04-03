#include <stdio.h>
int main()
{
	int a = 0;
	int arr[] = {1,2,3,4,5,6};
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));         //4 or 8
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));      //对数据类型时，括号去掉会报错 
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof a);           //对变量时，括号可以省略  
	printf("%d\n",sizeof(arr));        //对数组求字节，结果为总字节 
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));    //求数组元素个数-> 总字节/其中一个元素字节 
	return 0;
}
