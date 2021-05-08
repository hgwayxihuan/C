//#include<stdio.h>
//int main()
//{
//	int a = 18;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;  //重点在调试的过程中观察内存的变化。
//	*pi = 0;  //重点在调试的过程中观察内存的变化。
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc =  (char*)&n;
//	int* pi = &n;
//	*pc = 0;
//	*pi = 0;
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str+1);
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hexiongzhen";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
#include<stdio.h>
//int fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac1(n - 1);
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int ret = fac1(input);
//	printf("%d的阶乘为%d", input, ret);
//	return 0;
//}
//斐波那契数列
#include<stdio.h>
int my_feibo(int n)
{
	int a = 1;
	int b = 1;
	int c = a + b;
	if (n <= 2)
		return 1;
	else if (n == 3)
		return c;
	else
	while(n>3){
		a = b;
		b = c;
		c = a + b;
		n--;
	}
	return c;

}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int i = my_feibo(num);
	printf("第%d个的斐波那契数为%d", num, i);
	return 0;
}