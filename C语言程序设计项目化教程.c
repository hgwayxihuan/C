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
	printf("������뾶��");
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
		printf("%d������", year);
	}
	else if (year % 400 == 1)
	{
		printf("%d������", year);
	}
	else
	{
		printf("%d��������");
	}
	return 0;
}

Сд��ĸ����д��ĸ��ת��
int main()
{
	char a = 'x';
	char b = 'z';
	printf("Сд��ĸ�Լ�ASCIIֵΪ��%c,%d	%c,%d\n", a, a, b, b);
	a = a - 32;
	b = b - 32;
	printf("��д��ĸ�Լ�ASCIIֵΪ��%c,%d	%c,%d", a, a, b, b);
	return 0;
}

int main()
{
	int input = 0;
	printf("������ɼ���");
	scanf("%d", &input);
	switch (input / 10)
	{
	case 10:
	case 9:
		printf("�ɼ�ΪA��\n");
		break;
	case 8:
	case 7:
		printf("�ɼ�ΪB��\n");
		break;
	case 6:
		printf("�ɼ�ΪC��\n");
		break;
	default :
		printf("�ɼ�ΪD��\n");
		break;
	}
	return 0;
}
#include<string.h>
int main()
{
	char password[10] = "";
	printf("���������п����룺");
	scanf("%s",  password);
	if (strcmp(password, "123456") == 0)
	{
		printf("��ϲ���ǿ������ˣ�\n");
	}
	else
		printf("�������");
	return 0;
}
int main()
{
	float w = 0.0;
	float h = 0.0;
	float t = 0.0;
	printf("���������أ�");
	scanf("%f", &w);
	printf("��������ߣ�");
	scanf("%f", &h);
	t = w / (h * h);
	if (t < 18)
	{
		printf("����ƫ��\n");
	}
	else if (t >= 18 && t < 25)
	{
		printf("��������\n");
	}
	else if (t >= 25 && t < 27)
	{
		printf("���س���\n");
	}
	else
	{
		printf("���ط���\n");
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
		printf("������ɼ���");
		scanf("%d", &score);
		sum += score;
	}
	printf("ƽ���ɼ�Ϊ:%f", sum/12);
	return 0;
}


