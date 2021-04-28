#include<stdio.h>
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("未成年");
	}
	else if (age >= 18 && age < 28)
	{
		printf("青少年");
	}
	else if (age >= 28 && age < 48)
	{
		printf("老年");
	}
	else if (age >= 48 && age < 78)
	{
		printf("老年");
	}
	else
	{
		printf("老不死");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一");
		break;
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("星期三");
		break;
	case 4:
		printf("星期四");
		break;
	case 5:
		printf("星期五");
		break;
	case 6:
		printf("星期六");
		break;
	case 7:
		printf("星期日");
		break;
	default:
		break;
	}
}

在屏幕上打印1-10的数字

#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
}

计算n的阶乘

#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d的阶乘为%d", n, ret);
	return 0;
}

计算 1!+ 2!+ 3!+ …… + 10!

#include<stdio.h>
int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <=10; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("sum = %d", sum);
	return 0;
}

编写代码，演示多个字符从两端移动，向中间汇聚

#include<stdio.h>
#include<windows.h>
int main()
{
	char arr1[] = "######################";
	char arr2[] = "      hello  hxz      ";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
	while (left < right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left++;
		right--;
		printf("%s\n", arr1);
		Sleep(1000);
		system("cls");
	}
	return 0;
}

编写代码实现，模拟用户登录情景，并且只能登录三次。
(只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序.)

#include<stdio.h>
int main()
{
	char password[15] = "";
	printf("请输入密码>：");

	int i = 0;
	while (i < 3)
	{
		scanf("%s", password);
		if (strcmp(password, "666666") == 0)
		{
			printf("密码正确\n");
		}
		else
			printf("密码错误，请重新输入\n");
		i++;

	}
	if (i == 3)
		printf("三次密码错误，退出程序");


}

在一个有序数组中查找具体的某个数字n（折半查找算法/二分查找算法）

#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int k = 8;
	while (left <= right)
	{
		int sz = (left + right) / 2;
		if (arr[sz] > k)
		{
			right = sz - 1;
		}
		if (arr[sz] < k)
		{
			left = sz + 1;
		}
		else
		{
		printf("找到了，下标是%d", sz);
		break;
		}
	}
	if (left > right)
	{
		printf("找不到了");
	}
	
	return 0;
}

猜数字游戏

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("#########################\n");
	printf("######1.play 0.exit######\n");
	printf("#########################\n");
}
void game()
{
	printf("请猜数字>:");
	int input = 0;
	int rand_num = rand() % 100 + 1;
	do 
	{
	scanf("%d", &input);
	if (input > rand_num)
	{
		printf("猜大了\n");
	}
	else if (input < rand_num)
	{
		printf("猜小了\n");
	}
	else
	{
		printf("恭喜你猜对了\n");
		break;
	}
	} while (1);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
	menu();
	printf("请输入数字>:");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("输入错误，请重新输入数字\n");
		break;
	}
	} while (input);

	return 0;
}

一个关机程序

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char password[15] = "";
	system("shutdown -s -t 60");
	printf("你的电脑将在一分钟之后关机，如果输入我是猪，则取消关机\n");
	while (1)
	{
		scanf("%s", password);
		if (strcmp(password, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
	}
	return 0;
}



