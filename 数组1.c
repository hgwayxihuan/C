#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[10] = { 1, 2, 3 };//不完全初始化,剩下的元素默认初始化为0
	char arr2[5] = { 'a' , 'b' , 99};
	char arr3[5] = "abc";
	char arr4[] = "hello";
	printf("%d\n", sizeof(arr4));
	//sizeof计算arr4所占空间的大小。6个元素-char 6*1 = 6
	printf("%d\n", strlen(arr4));
	//strlen 计算字符串的长度，求'\0'之前的字符
	return 0;
	//strlen 和 sizeof 没有什么关联
	//strlen 是求字符串长度-只能针对字符串的长度 - 库函数-使用头文件
	//sizeof 计算变量、数组、类型的大小-单位是字节-操作符
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b' ,'c'};
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "abc";
	int  len = strlen(arr);
	printf("%c", arr[2]);
	int i = 0;
	for (i = 0; i <= len; i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i <= sz; i++)
	{
		printf("%p\n", &arr[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[][4] = { {1, 2, 3}, {4}, 5 };
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[3][4] = { 1, 2, 3, 4, 5 };
	int i = 0;
	for (i = 0; i <= 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}