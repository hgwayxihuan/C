//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}
//指针类型的意义
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	return 0;
//}
//指针类型决定指针进行解引用操作的时候看，能够访问的空间的大小
//int*p: *p能够访问4个字节
//char*P: *p能够访问1个字节
//double*p: *p能够访问8个字节
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%d\n", pa);
//	printf("%d\n", pa+1);
//	printf("%d\n", pc);
//	printf("%d\n", pc+1);
//	return 0;
//}
//指针乐行决定了：指针走一步走多远（指针的步长）
//int*p : p+1 -> 4
//char*p : p+1 -> 1
//double*p : p+1 -> 8
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名-首元素地址
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*p = i;
//		p++;
//		//*p++ = i; 等于上面两个表达式
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int* p = NULL;
	return 0;
}
