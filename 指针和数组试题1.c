#include<stdio.h>
//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16 sizeof(数组名）表示整个数组的大小，有4个元素4*4=16
//	printf("%d\n", sizeof(a + 0));//4/8 a+0表示第一个元素的地址，地址的大小32位为4个字节，64位为8个字节
//	printf("%d\n", sizeof(*a));//4 a表示第一个元素的地址，*a就是整形1，为int类型，4个字节
//	printf("%d\n", sizeof(a + 1));//4/8 a+1表示第二个元素的地址，地址的大小为4/8个字节
//	printf("%d\n", sizeof(a[1]));// 4 a[1]表示第二个元素，sizeof(a[1])求第二个元素的大小
//	printf("%d\n", sizeof(&a));//4/8 &a表示取整个数组的地址，数组的地址还是地址
//	printf("%d\n", sizeof(*&a));//16 &a数组的地址，数组地址的解引用访问数组，sizeof求的是数组的大小
//	printf("%d\n", sizeof(&a + 1));//4/8 表示数组的地址跳过一个数组，还是地址
//	printf("%d\n", sizeof(&a[0]));//4 第一个元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));//4 第二个元素的地址
//	return 0;
//}
int main()
{
	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6 求整个数组的大小6*1=6
	//printf("%d\n", sizeof(arr + 0));//4/8 arr+0表示首元素地址，地址是4/8个字节
	//printf("%d\n", sizeof(*arr));//1 第一个元素的大小
	//printf("%d\n", sizeof(arr[1]));//1 第二个元素的大小
	//printf("%d\n", sizeof(&arr));//4/8 数组的地址
	//printf("%d\n", sizeof(&arr + 1));//4/8 数组的地址+1
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素的地址
	
	char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6 strlen(const char*p)里面放的是地址，arr表示首元素地址
	//printf("%d\n", strlen(arr + 0));//6 表示从a的地址向后计算字符的个数
	//printf("%d\n", strlen(*arr));//err *arr表示字符a,strlen把a当做地址，即ascll码表的97，此时非法访问内存
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6 表示整个数组的地址，与a的地址一样
	//printf("%d\n", strlen(&arr + 1));//随机值 跳过一个数组的地址，后面不知道什么时候遇到0
	//printf("%d\n", strlen(&arr[0] + 1));//5 表示从b的地址向后计算

	printf("%d\n", sizeof(arr));//7 计算的事整个数组的大小，7*1=7
	printf("%d\n", sizeof(arr + 0));//4/8 表示第一个元素的地址
	printf("%d\n", sizeof(*arr));//1 a的大小
	printf("%d\n", sizeof(arr[1]));//1 b的大小
	printf("%d\n", sizeof(&arr));//4/8 表示数组的地址
	printf("%d\n", sizeof(&arr + 1));//4/8 还是地址
	printf("%d\n", sizeof(&arr[0] + 1));//4/8 b的地址
	return 0;
}