//ʵ�ֶ�һ�����������ð������
//#include<stdio.h>
//int binary_bubble(int arr[], int sz)
//{
//	int i = 0;
//	//ȷ��ð������Ĵ���
//	for (i = 0; i < sz - 1; i++)
//	{
//		 //һ��ð������Ķ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 15, 515, 12 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_bubble(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//����һ���������飬��ɶ�����Ĳ���
//1.ʵ�ֺ���Init��ʼ������Ϊȫ0
//2.ʵ��Print()����ӡ�����ÿ��Ԫ��
//3.ʵ��Reverse()�����������Ԫ�ص�����
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ

//#include<stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr, sz);
//	printf("\n");
//	Init(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//������A�е����ݺ�����B�е����ݽ��н���������һ����

//#include<stdio.h>
//void print(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7 , 8, 9, 10 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	print(arr1, arr2, sz);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a = %d, b = %d, c = %d", a, b, c);
	return 0;
}