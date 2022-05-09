#include <stdio.h>
#define YEARS 5
#define MONTHS 12
int main(void)
{
     const float datas[YEARS][MONTHS] = 
	             {
             		{0.2,2.1,3.3,2.1,0.2,0.0,0.5,1.4,2.5,3.0,2.1,1.4},
             		{0.0,0.5,0.3,3.2,3.1,2.1,1.2,4.0,0.0,0.2,3.2,3.3},
             		{1.2,3.2,2.2,1.4,1.1,3.6,0.2,0.3,0.5,2.3,1.5,6.4},
             		{2.3,3.0,1.4,2.3,3.2,4.4,1.3,5.2,2.1,1.2,0.9,0.4},
             		{1.2,2.2,2.2,2.5,1.2,0.1,0.9,3.2,1.4,5.4,1.2,2.2}
             	};
	int year;
	int month;
	float sum = 0;
	float all = 0;
	float sum1 = 0;
	for(year=0;year<YEARS;year++)
	{
		for(month=0;month<MONTHS;month++)
		{
			sum += datas[year][month];	
		}
		printf("%d年和为：%2.1f\n",2010+year,sum);
		all += sum;
	}
	printf("\n年平均为：%2.1f\n",all / YEARS);
	printf("\n月平均为：\n");
	for(month=0;month<MONTHS;month++)
	{
		for(year=0;year<YEARS;year++)
		{
			sum1 += datas[year][month];
		}
		printf("%.1f  ",sum1 / YEARS);
	}
	printf("\n");
	return 0;
}
