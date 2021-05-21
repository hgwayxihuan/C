#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 1; i <= 100; i++)
	{
		printf("%d ", i);
		sum += i;
	}
	printf("%d", sum);
	return 0;
}

int main()
{
	int r = 0;
	float area = 0.0;
	printf("请输入半径：");
	scanf("%d", &r);
	area = 3.14159 * r * r;
	printf("%f", area);
	return 0;
}

int main()
{
	int year = 0;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0)
	{
		printf("%d是闰年", year);
	}
	else if (year % 400 == 1)
	{
		printf("%d是闰年", year);
	}
	else
	{
		printf("%d不是闰年");
	}
	return 0;
}

小写字母到大写字母的转换
int main()
{
	char a = 'x';
	char b = 'z';
	printf("小写字母以及ASCII值为：%c,%d	%c,%d\n", a, a, b, b);
	a = a - 32;
	b = b - 32;
	printf("大写字母以及ASCII值为：%c,%d	%c,%d", a, a, b, b);
	return 0;
}

int main()
{
	int input = 0;
	printf("请输入成绩：");
	scanf("%d", &input);
	switch (input / 10)
	{
	case 10:
	case 9:
		printf("成绩为A等\n");
		break;
	case 8:
	case 7:
		printf("成绩为B等\n");
		break;
	case 6:
		printf("成绩为C等\n");
		break;
	default :
		printf("成绩为D等\n");
		break;
	}
	return 0;
}
#include<string.h>
int main()
{
	char password[10] = "";
	printf("请输入银行卡密码：");
	scanf("%s",  password);
	if (strcmp(password, "123456") == 0)
	{
		printf("恭喜你是卡的主人！\n");
	}
	else
		printf("密码错误");
	return 0;
}
int main()
{
	float w = 0.0;
	float h = 0.0;
	float t = 0.0;
	printf("请输入体重：");
	scanf("%f", &w);
	printf("请输入身高：");
	scanf("%f", &h);
	t = w / (h * h);
	if (t < 18)
	{
		printf("体重偏瘦\n");
	}
	else if (t >= 18 && t < 25)
	{
		printf("体重正常\n");
	}
	else if (t >= 25 && t < 27)
	{
		printf("体重超重\n");
	}
	else
	{
		printf("体重肥胖\n");
	}
	return 0;
}

int main()
{
	int i = 0;
	int score = 0;
	float sum = 0.0;
	for (i = 1; i <= 12; i++)
	{
		printf("请输入成绩：");
		scanf("%d", &score);
		sum += score;
	}
	printf("平均成绩为:%f", sum/12);
	return 0;
}


