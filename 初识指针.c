//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}
//ָ�����͵�����
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	return 0;
//}
//ָ�����;���ָ����н����ò�����ʱ�򿴣��ܹ����ʵĿռ�Ĵ�С
//int*p: *p�ܹ�����4���ֽ�
//char*P: *p�ܹ�����1���ֽ�
//double*p: *p�ܹ�����8���ֽ�
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%d\n", pa);
//	printf("%d\n", pa+1);
//	printf("%d\n", pc);
//	printf("%d\n", pc+1);
//	return 0;
//}
//ָ�����о����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
//int*p : p+1 -> 4
//char*p : p+1 -> 1
//double*p : p+1 -> 8
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������-��Ԫ�ص�ַ
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*p = i;
//		p++;
//		//*p++ = i; ���������������ʽ
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int* p = NULL;
	return 0;
}
