写一个函数，实现一个整形有序数组的二分查找

#include<stdio.h>
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return 0;

}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (0 == ret)
	{
		printf("找不到指定数字");
	}
	else
	{
		printf("找到了，下标是%d", ret);
	}
	return 0;
}

写一个函数，每调用一次这个函数，就会将num的值增加1

#include<stdio.h>
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
}

函数的链式访问（把一个函数的返回值作为另外一个函数的参数）
#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 18)));
	return 0;
}

接受一个整型值（无符号），按照顺序打印它的每一位。 
例如： 输入：1234，输出 1 2 3 4.

#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	print(input);
	return 0;
}

编写函数不允许创建临时变量，求字符串的长度。

#include <stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 1234;
	print(num);
	return 0;
}
