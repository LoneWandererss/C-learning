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
	printf("%d\n",sizeof(double));      //����������ʱ������ȥ���ᱨ�� 
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof a);           //�Ա���ʱ�����ſ���ʡ��  
	printf("%d\n",sizeof(arr));        //���������ֽڣ����Ϊ���ֽ� 
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));    //������Ԫ�ظ���-> ���ֽ�/����һ��Ԫ���ֽ� 
	return 0;
}
