�жϴ�С�˴洢ģʽ
#include<stdio.h>
int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("С�˴洢\n");
	}
	else
	{
		printf("��˴洢\n");
	}
	return 0;
}
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return *p;
	//return *((char*)&a);
	//����1��С��
	//����0�����
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С�˴洢\n");
	}
	else
	{
		printf("��˴洢\n");
	}
	return 0;
}
ָ�����͵�����ʹ��ָ���ڽ�����ʱ�ܷ��ʼ����ֽ�
int main()
{
	int a = 0x346353ab;
	short* p = &a;
	*p = 0;
}
int main()
{
	char a = -128;
	char b = 128;
	int c = 10;
	unsigned int d = -5;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c - d = %d\n", c-d);
	return 0;
}
#include<string.h>
int main()
{
	char a[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));
	return 0;
}
int main()
{
	int n = 9;
	float* p = (float*)&n;
	printf("n = %d\n", n);
	printf("*p = %f\n", *p);
	*p = 9.0;
	printf("n = %d\n", n);
	printf("*p = %f\n", *p);
	return 0;
}
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}