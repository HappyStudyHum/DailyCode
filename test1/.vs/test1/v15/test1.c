#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//// ���1-100֮�������
	//printf("1-100�������У�");
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
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������");
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
	//	{//switch����Ƕ��ʹ��
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
	//���1-10�ҳ�5�������ֵ
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