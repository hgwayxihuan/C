//дһ�����������ҳ����������е����ֵ
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 18;
//	int b = 28;
//	int max = get_max(a, b);
//	printf("max = %d", max);
//	return 0;
//}

//дһ�����������ҳ����������е����ֵ

//#include<stdio.h>
//void swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//	return 0;
//}
//int main()
//{
//	int a = 18;
//	int b = 28;
//	swap(&a, &b);
//	printf("a = %d, b = %d", a, b);
//	return 0;
//}

//дһ�����������ж�һ�����ǲ���������

//#include<stdio.h>
//int is_prime(int n)
//{
//	if (1 == n)
//		return 0;
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	if (1 == is_prime(input))
//	{
//		printf("%d������\n", input);
//	}
//	else
//	{
//		printf("%d��������\n", input);
//	}
//	return 0;
//}

//дһ������1000��2000������

//#include<stdio.h>
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

