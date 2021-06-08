#include<stdio.h>
#include<stdlib.h>
void qsort(void* base, size_t num, size_t width, int(__cdecl* compare)(const void* elem1, const void* elem2));
第一个参数：待排列数组的首元素地址
第二个参数：待排列数组的元素个数
第三个参数：待排列数组的每个元素所占空间的大小-单位是字节
第三个参数：函数指针，比较两个元素的所用函数的地址-函数指针的两个参数是待比较两个函数的地址
int cmp_int(const void* e1, const void* e2)
{
	//两个整形的比较
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	//整形数组的排列
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof)(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}
void bubble_sort(int arr[], int sz, int width, int cmp_int(const void* e1, const void* e2))
{
	int i = 0;//冒泡排序的趟数
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;//一趟冒泡排序的对数
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个数据的比较
			if()
		}
	}
}
int main()
{
	test1();
	return 0;
}