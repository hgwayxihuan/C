//接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4.
//#include<stdio.h>
//void print(int a)
//{
//	
//	if (a>9)
//	{
//		
//		print(a/10);
//	}
//	printf("%d ", a%10);
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	print(input);
//	return 0;
//
//}


//编写函数不允许创建临时变量，求字符串的长度


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch[] = "hello";
//	int a = strlen(ch);
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* b)
//{
//	int count = 0;
// 	while (*b != '\0')
//	{
//		b++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "hello hexiongzhen";
//	int a = my_strlen(ch);
//	printf("字符串长度为%d", a);
//	return 0;
//}


//用函数求n的阶乘（不创建变量）


//#include<stdio.h>
//int my_jiec(int x)
//{
//	int y = 1;
//	int i = 0;
//	for (i = 1; i <= x; i++)
//	{
//		y *= i;
//	}
//	return y;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = my_jiec(n);
//	printf("%d的阶乘为%d", n, ret);
//	return 0;
//}


