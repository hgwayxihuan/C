#include<stdio.h>
int main()
{
	char ch = 'a';
	char* pc = &ch;
	*pc = 'b';
	printf("%c", *pc);
	return 0;
}
int main()
{
	//char ch[] = "abcdef";
	//char* pc = ch;
	//printf("%s", pc);
	//char* pc = "abcdef";
	//printf("%s", pc);
	return 0;
}
#include<stdio.h>
int main()
{
	char str1[] = "abcdef";
	char str2[] = "abcdef";
	char* str3 = "abcdef";
	char* str4 = "abcdef";
	if (str1 == str2)
	{
		printf("str1 and str2 is same\n");
	}
	else
	{
		printf("str1 and str2 is no same\n");
	}
	if (str3 == str4)
	{
		printf("str3 and str4 is same\n");
	}
	else
	{
		printf("str3 and str4 is no same\n");
	}
}
int main()
{
	int arr[5] = { 0 };
	printf("arr = %p\n", arr);
	printf("arr+1 = %p\n", arr + 1);
	printf("&arr = %p\n", &arr);
	printf("&arr+1 = %p\n", &arr + 1);
	return 0;
}
void print1(int arr[2][4], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int (*arr)[4], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8};
	print1(arr, 2, 4);
	//数组名arr表示首元素地址
	//但是二维数组的首元素是二维数组的第一行
	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
	print2(arr, 2, 4);
}
void test(int** p)
{
	printf("%d", **p);
}
int main()
{
	int n = 10;
	int* p1 = &n;
	int** p2 = &p1;
	test(p2);
	return 0;
}
函数指针
int test1(int x, int y)
{
	return x + y;
}
void test2(char* str)
{
	printf("%s\n", str);
}
int main()
{
	int (*p)(int, int) = test1;
	printf("%d\n", (*p)(3, 5));
	void (*p2)(char*) = test2;
	(*p2)("hello hexiongzhen");
	return 0;
}
int main()
{
	int arr1[4] = { 1, 2, 3, 4 };
	int arr2[4] = { 2, 3, 4, 5 };
	int arr3[4] = { 3, 4, 5, 6 };
	int* arr[3] = { arr1, arr2, arr3 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", *(arr[i]+j));
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int arr[3][4] = { {1, 2, 3, 4}, {2, 3, 4 ,5}, {3, 4, 5, 6} };
	int (*parr)[4] = arr;
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

