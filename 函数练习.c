дһ��������ʵ��һ��������������Ķ��ֲ���

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
		printf("�Ҳ���ָ������");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d", ret);
	}
	return 0;
}

дһ��������ÿ����һ������������ͻὫnum��ֵ����1

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

��������ʽ���ʣ���һ�������ķ���ֵ��Ϊ����һ�������Ĳ�����
#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 18)));
	return 0;
}

����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� 
���磺 ���룺1234����� 1 2 3 4.

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

��д��������������ʱ���������ַ����ĳ��ȡ�

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
