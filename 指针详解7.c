#include<stdio.h>
#include<stdlib.h>
void qsort(void* base, size_t num, size_t width, int(__cdecl* compare)(const void* elem1, const void* elem2));
��һ���������������������Ԫ�ص�ַ
�ڶ��������������������Ԫ�ظ���
�����������������������ÿ��Ԫ����ռ�ռ�Ĵ�С-��λ���ֽ�
����������������ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-����ָ������������Ǵ��Ƚ����������ĵ�ַ
int cmp_int(const void* e1, const void* e2)
{
	//�������εıȽ�
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	//�������������
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof)(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}
void bubble_sort(int arr[], int sz, int width, int cmp_int(const void* e1, const void* e2))
{
	int i = 0;//ð�����������
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;//һ��ð������Ķ���
		for (j = 0; j < sz - 1 - i; j++)
		{
			//�������ݵıȽ�
			if()
		}
	}
}
int main()
{
	test1();
	return 0;
}