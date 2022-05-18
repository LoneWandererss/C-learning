#include <stdio.h>
int main(void)
{
	//指针的8种操作 
	int urn[5] = {100,200,300,400,500};
	int * ptr1,* ptr2,* ptr3;
	//1.赋值  2.解引用  3.取址 
	ptr1 = urn;
	ptr2 = &urn[2];
	printf("ptr1=%p, *ptr1=%d, &ptr1=%p\n",ptr1,*ptr1,&ptr1);
	//4.指针与整数相加 
	ptr3 = ptr1 + 4;
	printf("ptr1+4=%p, *(ptr+4)=%d\n",ptr1+4,*(ptr1+4));
	//5.递增指针 
	ptr1++;
	printf("ptr1=%p, *ptr1=%d, &ptr1=%p\n",ptr1,*ptr1,&ptr1);
	//6.递减指针 
	ptr2--;
	printf("ptr2=%p, *ptr2=%d, &ptr2=%p\n",ptr2,*ptr2,&ptr2);
	
	--ptr1;
	++ptr2;
	printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);
	//7.指针求差 
	printf("ptr2=%p, ptr1=%p, ptr2-ptr1=%td\n",ptr2,ptr1,ptr2-ptr1);
	//8.指针减去一个整数 
	printf("ptr3=%p, ptr3-2=%p\n",ptr3,ptr3-2);
	
	return 0;
}
