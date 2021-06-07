#include<stdio.h>
#include<stdlib.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	//指针数组
	int* arr[10];
	//数组指针
	int* (*p)[10] = &arr;
	//函数指针
	int (*pa)(int, int) = Add;//&Add
	int sum = (*pa)(1, 2);// pa(1, 2) / Add(1, 2)
	printf("%d\n", sum);
	//函数指针的数组
	int (*parr[5])(int, int);
	//指向函数指针数组的指针
	int (*(*pparr)[5])(int, int) = &parr;
	return 0;
}

void bubble_sort(int arr[], int sz)
{
	int i = 0;//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//一趟冒泡排序比较的对数
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
int cmp_int(const void* e1, const void* e2)//void* 可以接受任意类型的地址，不能进行解引用操作，不能进行+-整数的操作
{
	//比较两个整形值大小的函数
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1, const void* e2)
{
	//比较两个浮点数大小的函数
	return (int)(*(float*)e1 - *(float*)e2);

}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	//通过结构体的年龄比较两个大小
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//通过结构体的名字比较两个大小
	//字符串比较不能直接用><=比较，应该用strcmp函数比较
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
