#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int count = 0;
	float sum = 0.0;
	float num = 0.0;
	printf("请输入职工脱岗、迟到、早退次数：");
	scanf("%d", &count);
	printf("请输入应发工资：");
	scanf("%f", &sum);
	switch (count)
	{
	case 0:
		num = sum;
		break;
	case 1:
		num = sum * (1 - 0.02);
		break;
	case 2:
		num = sum * (1 - 0.05);
		break;
	case 3:
		num = sum * (1 - 0.1);
		break;
	case 4:
		num = sum * (1 - 0.2);
		break;
	default :
		num = sum * (1 - 0.4);
		break;
	}
	printf("实发工资为：%.2f", num);
	return 0;
}

int main()
{
	int n = 0;
	int num = 0;
	printf("n的9是它的反序数，这个数是：");
	for (n = 1000; n < 10000; n++)
	{
		num = n % 10 * 1000 + n % 100 / 10 * 100 + n % 1000 / 100 * 10 + n / 1000;
		if (n * 9 == num)
		{
			printf("%d\n", n);
			break;
		}
	}
	return 0;
}
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	for (x = 0; x <= 20; x++)
	{
		for (y = 0; y <= 33; y++)
		{
			for (z = 0; z <= 100; z++)
			{
				if (x + y + z == 100 && 5 * x + 3 * y + z / 3.0 == 100)
				{
					printf("公鸡：%d 母鸡：%d 小鸡：%d\n", x, y, z);
				}
			}
		}
	}
	return 0;
}
#include<stdlib.h>
int main()
{
	int count = 0;
	int input = 0;
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	printf("请猜1到100之间的数字：");
	while (1)
	{
		scanf("%d", &input);
		if (ret > input)
		{
			printf("猜小了\n");
			count++;
		}
		else if (ret < input)
		{
			printf("猜大了\n");
			count++;
		}
		else
		{
			printf("恭喜你猜对了\n");
			printf("一共猜了%d", count);
			break;
		}
	}
	return 0;
}
#define N 10
int main()
{
	float gz[N] = { 0 };
	float ave = 0.0;
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("请输入第%d位地工资:", i + 1);
		scanf("%f", &gz[i]);
		ave += gz[i];
	}
	ave /= N;
	printf("平均工资位：%.2f", ave);
	return 0;
}
#define T 3.14
#define N 5
int main()
{
	float r[N] = { 0 };
	float s[N] = { 0 };
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("请输入第%d个半径：", i+1);
		scanf("%f", &r[i]);
		s[i] = T*r[i] * r[i];
	}
	for (i = 0; i < N; i++)
	{
		printf("第%d个的面积为：%.2f\n", i, s[i]);
	}
	return 0;
//}
#define N  5
int main()
{
	float gz[] = { 6500, 3152.3, 1931.1, 2100, 5533 };
	int i = 0;
	for (i = 0; i < N; i++)
	{
		if (gz[i] > 5000)
		{
			printf("第%d位: %.2f\n", i + 1, gz[i]);
		}
	}
	return 0;
}
#define N 5
int main()
{
	int i = 0;
	float gz[N] = { 6500, 3151.3, 1931.1, 2100, 5533 };
	printf("修改前：");
	for (i = 0; i < N; i++)
	{
		printf("%.2f ", gz[i]);
	}
	printf("\n修改后：");
	for (i = 0; i < N; i++)
	{
		if (i == 2)
		{
			gz[i] = 5000;
		}
		printf("%.2f ", gz[i]);
	}
	return 0;
}
#define N 5
int main()
{
	int i = 0;
	int gz[N] = { 5000, 2000, 3000, 4000, 1000 };
	for (i = 0; i < N - 1; i++)
	{
		int j = 0;
		for (j = 0; j < N - 1 - i ; j++)
		{
			if (gz[j] > gz[j + 1])
			{
				int tmp = gz[j];
				gz[j] = gz[j + 1];
				gz[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%d ", gz[i]);
	}
	return 0;
}
void bubble_binary(int arr[], int sz)
{
	int i = 0;
	int flag = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0;j < sz - 1 - i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
int main()
{
	int i = 0;
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_binary(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
int main()
{
	int i = 0;
	char ch[5] = { 0 };
	printf("请输入5个字符：");
	for (i = 0; i < 5; i++)
	{
		scanf("%c", &ch[i]);
	}
	printf("%c", ch[0]);
	printf("%c", ch[2]);
	printf("%c", ch[4]);
}
int main()
{
	char xs[10] = { 0 };
	char mz[10] = { 0 };
	printf("请输入姓氏：");
	gets(xs);
	printf("请输入名字：");
	gets(mz);
	strcat(xs, mz);
	printf("名字为：");
	puts(xs);
	return 0;
}
int main()
{
	char arr1[] = "########";
	char arr2[] = "hello";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}
int main()
{
	char st1[] = "abcdefg";
	char st2[] = "hik";
	printf("%d\n", strcmp(st1, st2));
	printf("%d\n", strcmp(st1, st1));
	printf("%d\n", strcmp(st2, st2));
	printf("%d\n", strcmp(st2, st1));
	return 0;
}
int main()
{
	int i = 0;
	int j = 0;
	int arr[3][4] = { {1,2,3}, 3 ,4,5,4,1 };
	printf("转置前：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

  