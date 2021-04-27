//求两个数最大的公约数
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
//	printf("这两个数最大公约数为%d", b);
//	return 0;
//}
//
//
//判断year是否为闰年
//能被4整除并且不能被100整除或者被400整除的数是闰年
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
//判断i是否为素数1.试除法
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
//	printf("\n素数有%d", count);
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
//	printf("\n素数有%d", count);
//	return 0;
//}
//
//
//数字中出现个几个数字9
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
//	printf("\n一共有%d", count);
//	return 0;
//}
//
//
//
//求一分之一到一百分之一的和一加一减
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
//求10个整形中的最大值
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
//打印九九乘法表
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
//编写代码在一个整形有序数组中查找具体的某个数，
//要求：找到了就打印数字所在的下标，找不到则输出：找不到
//折半查找算法，二分查找算法
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
//			printf("找到了,下标是%d", sz);
//			break;
//		}
//	}
//	return 0;
//}
//
