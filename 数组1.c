#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[10] = { 1, 2, 3 };//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	char arr2[5] = { 'a' , 'b' , 99};
	char arr3[5] = "abc";
	char arr4[] = "hello";
	printf("%d\n", sizeof(arr4));
	//sizeof����arr4��ռ�ռ�Ĵ�С��6��Ԫ��-char 6*1 = 6
	printf("%d\n", strlen(arr4));
	//strlen �����ַ����ĳ��ȣ���'\0'֮ǰ���ַ�
	return 0;
	//strlen �� sizeof û��ʲô����
	//strlen �����ַ�������-ֻ������ַ����ĳ��� - �⺯��-ʹ��ͷ�ļ�
	//sizeof ������������顢���͵Ĵ�С-��λ���ֽ�-������
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b' ,'c'};
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "abc";
	int  len = strlen(arr);
	printf("%c", arr[2]);
	int i = 0;
	for (i = 0; i <= len; i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i <= sz; i++)
	{
		printf("%p\n", &arr[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[][4] = { {1, 2, 3}, {4}, 5 };
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[3][4] = { 1, 2, 3, 4, 5 };
	int i = 0;
	for (i = 0; i <= 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}