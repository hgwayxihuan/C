#include<stdio.h>
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int x = 18;
	int y = 28;
	printf("���ý�������ǰ��");
	printf("x = %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("���ý���������");
	printf("x = %d, y = %d\n", x, y);
	return 0;
}
#define N 7
void bubble_binary(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int i = 0;
	int arr[7] = { 0 };
	printf("������7���������Կո�ָ���");
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("��С���������������ǣ�");
	bubble_binary(arr, N);
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	return  0;
}
struct Stu
{
	char id[20];
	char num[20];
	int age;
	char sex[20];
};
void print(struct Stu s)
{
	printf("%s %s %d %s", s.id, s.num, s.age, s.sex);
}
int main()
{
	struct Stu s = { 0 };
	printf("��һ������ѧ����ѧ�š����������䡢�Ա�:");
	scanf("%s%s%d%s", &s.id, &s.num, &s.age, &s.sex);
	print(s);
	return 0;
}
int Fib(int n)
{
	//if (n == 1)
	//	return 1;
	//else
	//	return n * Fib(n - 1);
	int i = 0;
	int sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}
int main()
{
	int n = 0;
	printf("������һ��������׳ˣ�");
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d�Ľ׳�Ϊ��%d", n, ret);
	return 0;
}
int my_ave(float score[])
{
	float sum = 0;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		sum += score[i];
	}
	sum /= 5;
	return sum;
}
int main()
{
	int i = 0;
	float score[5] = { 0 };
	float ave = 0;
	printf("������ѧ����5�ſγ̣�");
	for (i = 0; i < 5; i++)
	{
		scanf("%f", &score[i]);
	}
	float sum = my_ave(score);
	printf("average score is %.2f", sum);
}
�������
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (j == i)
				arr[i][j] = 1;
			if (i > 1 && j > 0)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int arr[5] = { 0 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(p+i));
	}
	return 0;
}