#include<stdio.h>
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("δ����");
	}
	else if (age >= 18 && age < 28)
	{
		printf("������");
	}
	else if (age >= 28 && age < 48)
	{
		printf("����");
	}
	else if (age >= 48 && age < 78)
	{
		printf("����");
	}
	else
	{
		printf("�ϲ���");
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
		printf("����һ");
		break;
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("������");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("������");
		break;
	case 6:
		printf("������");
		break;
	case 7:
		printf("������");
		break;
	default:
		break;
	}
}

����Ļ�ϴ�ӡ1-10������

#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
}

����n�Ľ׳�

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
	printf("%d�Ľ׳�Ϊ%d", n, ret);
	return 0;
}

���� 1!+ 2!+ 3!+ ���� + 10!

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

��д���룬��ʾ����ַ��������ƶ������м���

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

��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
(ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����.)

#include<stdio.h>
int main()
{
	char password[15] = "";
	printf("����������>��");

	int i = 0;
	while (i < 3)
	{
		scanf("%s", password);
		if (strcmp(password, "666666") == 0)
		{
			printf("������ȷ\n");
		}
		else
			printf("�����������������\n");
		i++;

	}
	if (i == 3)
		printf("������������˳�����");


}

��һ�����������в��Ҿ����ĳ������n���۰�����㷨/���ֲ����㷨��

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
		printf("�ҵ��ˣ��±���%d", sz);
		break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����");
	}
	
	return 0;
}

��������Ϸ

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
	printf("�������>:");
	int input = 0;
	int rand_num = rand() % 100 + 1;
	do 
	{
	scanf("%d", &input);
	if (input > rand_num)
	{
		printf("�´���\n");
	}
	else if (input < rand_num)
	{
		printf("��С��\n");
	}
	else
	{
		printf("��ϲ��¶���\n");
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
	printf("����������>:");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("���������������������\n");
		break;
	}
	} while (input);

	return 0;
}

һ���ػ�����

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char password[15] = "";
	system("shutdown -s -t 60");
	printf("��ĵ��Խ���һ����֮��ػ������������������ȡ���ػ�\n");
	while (1)
	{
		scanf("%s", password);
		if (strcmp(password, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	return 0;
}



