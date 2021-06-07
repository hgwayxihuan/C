#include<stdio.h>
#include<stdlib.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	//ָ������
	int* arr[10];
	//����ָ��
	int* (*p)[10] = &arr;
	//����ָ��
	int (*pa)(int, int) = Add;//&Add
	int sum = (*pa)(1, 2);// pa(1, 2) / Add(1, 2)
	printf("%d\n", sum);
	//����ָ�������
	int (*parr[5])(int, int);
	//ָ����ָ�������ָ��
	int (*(*pparr)[5])(int, int) = &parr;
	return 0;
}

void bubble_sort(int arr[], int sz)
{
	int i = 0;//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//һ��ð������ȽϵĶ���
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_int(const void* e1, const void* e2)//void* ���Խ����������͵ĵ�ַ�����ܽ��н����ò��������ܽ���+-�����Ĳ���
{
	//�Ƚ���������ֵ��С�ĺ���
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1, const void* e2)
{
	//�Ƚ�������������С�ĺ���
	return (int)(*(float*)e1 - *(float*)e2);

}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	//ͨ���ṹ�������Ƚ�������С
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//ͨ���ṹ������ֱȽ�������С
	//�ַ����Ƚϲ���ֱ����><=�Ƚϣ�Ӧ����strcmp�����Ƚ�
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test1()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n");
}
void test3()
{
	struct Stu s[3] = { {"xiaohe", 21}, {"xiaoxiong", 19}, {"xiaozhen", 20} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
	test1();
	test2();
	test3();
	//bubble_sort(arr, sz);
	return 0;
}
