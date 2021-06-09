#include<stdio.h>
//字符指针
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", *pc);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcde";
//	char* pa = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pa);
//	char* pc = "abcde";//是一个常量字符串
//	printf("%c\n", *pc);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char str1[] = "abcde";
//	char str2[] = "abcde";
//	char* str3 = "abcde";
//	char* str4 = "abcde";
//	if (str1 == str2)
//	{
//		printf("str1 and str2 is same\n");
//	}
//	else
//	{
//		printf("str1 and str2 is no same\n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3 and str4 is same\n");
//	}
//	else
//	{
//		printf("str3 and str4 is no same\n");
//	}
//	return 0;
//}
//指针数组
//int main()
//{
//	int arr1[3] = { 1, 2, 3 };
//	int arr2[3] = { 2, 3, 4 };
//	int arr3[3] = { 3, 4, 5 };
//	int* arr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//}