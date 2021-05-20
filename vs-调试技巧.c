#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		printf("%d ", i);
	}
	system("pause");
	return 0;
}
int main()
{
	//for (i = 0; i < 100; i++)
	//{
	//	printf("%d ", i);
	//}
	//for (i = 0; i < 100; i++)
	//{
	//	printf("%d ", i-1);
	//}
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%p\n", arr);
	printf("%p\n", &i);
	for (i = 0; i <= 15; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
}
int main()
{
	{
		int tmp = 0;
		printf("tmp = %d\n", tmp);
	}
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	return 0;
}
void test2()
{
	printf("hehe\n");
}
void test1()
{
	test2();
}
void test()
{
	test1();
}
int main()
{
	test();
	return 0;
}
int main()
{
	int i = 0;
	int sum = 0;//保存最终结果
	int n = 0;
	int ret = 1;//保存n的阶乘
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
}
void my_strcpy(char* dest, char* str)
{
	assert(dest != NULL);
	assert(str != NULL);//断言：条件为真，什么都没发生，条件为假，会报错
	if (dest != NULL && str != NULL)
	{
		while (*str != '\0')
{
	*dest = *str;
	dest++;
	str++;
	//*dest++ = *str++;
}
		while (*dest++ = *str++)
		{
			;
		}
		*dest = *str;//'\0'
	}
}
int main()
{
	char arr1[] = "###########";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	strcpy(arr1, arr2);//字符串拷贝
	printf("%s", arr1);
	return 0;
}