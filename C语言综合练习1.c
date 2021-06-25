#include<stdio.h>
int main()
{
	int a[3][3] = { 0 };
	int* p = &a[0][0];
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		p[i] = i + 1;
	}
	printf("%d\n", a[1][2]);
	return 0;
}
struct person
{
	char name[9];
	int age;
};
int main()
{
	struct person class[5] = { "john", 17, "paul", 19,"mary", 18, "adam", 16 };
	printf("%s\n", class[2].name);
	return 0;
}
fun(int x)
{
	static int y = 2;
	y = y + x;
	return (y);
}
int main()
{
	int i = 0;
	int s = 0;
	for (i = 0; i <= 2; i++)
	{
		s = s + fun(2);
	}
	printf("%d\n", s);
}
#include<string.h>
int main()
{
	char str1[20] = "passport";
	char str2[20] = "plaease";
	strcat(str1, str2);
	printf("%s", str1);
	return 0;
}
int f(int x);
int main()
{
	int n = 1;
	int m = f(f(f(n)));
	printf("%d\n" ,m);
}
int f(int x)
{
	return x * 2;
}