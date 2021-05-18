//统计二进制中1的个数
#include<stdio.h>
//int get_bin_count(int n)//负数不行，可以把int改为unsigned int
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int get_bin_count(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int get_bin_count(int n)
//{
//	int i = 0;
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = get_bin_count(num);
//	printf("%d", count);
//	return 0;
//}
//求二进制中不同位的个数
//#include<stdio.h>
//int get_diff_bit(int x, int y)
//{
//	int n = x ^ y;//异或之后实际上求n中二进制1的个数即可
//	int ret = get_bin_count(n);
//	return ret;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int ret = get_diff_bit(num1, num2);
//	printf("%d", ret);
//	return 0;
//}
//获取一个整形二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include<stdio.h>
//void print(int n)
//{
//	int i = 0;
//	printf("奇数位：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//使用指针打印数组内容
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* pi = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pi + i));
//	}
//}
//#include<stdio.h>
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//编写一个函数reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列
//要求：不能使用C函数库中的字符串操作函数

#include<stdio.h>
int get_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
void reverse_string(char arr[])
{
	int left = 0;
	int right = get_strlen(arr) - 1;
	int i = 0;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "hello";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}
