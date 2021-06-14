//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8 指针变量的大小4/8个字节，p存放的是第一个字符的地址，地址大小4/8
//	printf("%d\n", sizeof(p + 1));//4/8 p+1第二个元素的地址
//	printf("%d\n", sizeof(*p));//1 *p表示字符a，a的大小是1
//	printf("%d\n", sizeof(p[0]));//1 arr[0] == *(arr+0)  p[0] = *(P+0) 表示第一个元素
//	printf("%d\n", sizeof(&p));//4/8 p的地址
//	printf("%d\n", sizeof(&p + 1));//4/8 跳过指针变量p的一个地址
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 第二个元素的地址
//
//	printf("%d\n", strlen(p));//6 p表示a的地址
//	printf("%d\n", strlen(p + 1));//5 p+1表示b的地址
//	printf("%d\n", strlen(*p));//err *p表示字符a,会把a(即97)当做地址，此时地址不是你的，非法访问
//	printf("%d\n", strlen(p[0]));//err p[0]表示字符a,会把a(即97)当做地址，此时地址不是你的，非法访问
//	printf("%d\n", strlen(&p));// 随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5 表示b的地址
//	return 0;
//}
//int main()
//{
//	二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 sizeof(数组名)求整个数组的大小3*4*4=48 
//	printf("%d\n", sizeof(a[0][0]));//4 第一行第一个元素的大小
//	printf("%d\n", sizeof(a[0]));//16 a[0]是二维数组的首元素地址,所以是求a[0]数组的大小
//	printf("%d\n", sizeof(a[0] + 1));//4/8 a[0]+1表示第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 表示第一行第二个元素
//	printf("%d\n", sizeof(a + 1));//4/8 a+1第二行数组的地址
//	printf("%d\n", sizeof(*(a + 1)));//16 第二行数组的大小
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 第二行数组的大小
//	printf("%d\n", sizeof(*a));//16 第一行数组大小
//	printf("%d\n", sizeof(a[3]));//16 第四行数组大小sizeof计算的是类型的大小，不参与实际运算
//	return 0;
//}