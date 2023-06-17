#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//// 输出1-100之间的奇数
	//printf("1-100的奇数有：");
	//for (size_t i = 1; i <= 100; i++)
	//{
	//	if (i % 2)
	//	{
	//		printf("%d ",i);
	//	}
	//}
	/*int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	default:
		printf("输入错误！");
	}*/

	//int n = 1;
	//int m = 2;
	//switch (n)
	//{
	//case 1:
	//	m++;
	//case 2:
	//	n++;
	//case 3:
	//	switch (n)
	//	{//switch允许嵌套使用
	//	case 1:
	//		n++;
	//	case 2:
	//		m++;
	//		n++;
	//		break;
	//	}
	//case 4:
	//	m++;
	//	break;
	//default:
	//	break;
	//}
	//printf("m = %d, n = %d\n", m, n);
	//输出1-10且除5以外的数值
	int i = 0;
	while (i<10)
	{
		i++;
		if (i==5)
		{
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}