//�����������Ĺ�Լ��
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (a%b)
//	{
//		tmp = a % b;
//		a = b;
//		b = tmp;
//
//	}
//	printf("�����������Լ��Ϊ%d", b);
//	return 0;
//}
//
//
//�ж�year�Ƿ�Ϊ����
//�ܱ�4�������Ҳ��ܱ�100�������߱�400��������������
//
//
//
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		// else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//			
//	}
//	printf("\ncount = %d", count);
//
//	return 0;
//}
//
//
//�ж�i�Ƿ�Ϊ����1.�Գ���
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n������%d", count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i% j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//
//		}
//	}
//	printf("\n������%d", count);
//	return 0;
//}
//
//
//�����г��ָ���������9
//
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\nһ����%d", count);
//	return 0;
//}
//
//
//
//��һ��֮һ��һ�ٷ�֮һ�ĺ�һ��һ��
//
//
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %lf", sum);
//	return 0;
//
//}
//
//
//��10�������е����ֵ
//
//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { -1, 2, 3, 47, 5, -6, 7, 98, 9,-10 };
//	int max = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//
//	return 0;
//}
//
//
//��ӡ�žų˷���
//
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//
//
//��д������һ���������������в��Ҿ����ĳ������
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���
//�۰�����㷨�����ֲ����㷨
//
//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 9;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int sz = (left + right) / 2;
//	int i = 0;
//	for (i = 0; i <= right; i++)
//	{
//		if (k > arr[sz])
//		{
//			left = sz++;
//			right--;
//		}
//		if (k < arr[sz])
//		{
//			right = sz--;
//			left++;
//		}
//		if (k == arr[sz])
//		{
//			printf("�ҵ���,�±���%d", sz);
//			break;
//		}
//	}
//	return 0;
//}
//
