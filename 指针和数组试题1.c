#include<stdio.h>
//int main()
//{
//	//һά����
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16 sizeof(����������ʾ��������Ĵ�С����4��Ԫ��4*4=16
//	printf("%d\n", sizeof(a + 0));//4/8 a+0��ʾ��һ��Ԫ�صĵ�ַ����ַ�Ĵ�С32λΪ4���ֽڣ�64λΪ8���ֽ�
//	printf("%d\n", sizeof(*a));//4 a��ʾ��һ��Ԫ�صĵ�ַ��*a��������1��Ϊint���ͣ�4���ֽ�
//	printf("%d\n", sizeof(a + 1));//4/8 a+1��ʾ�ڶ���Ԫ�صĵ�ַ����ַ�Ĵ�СΪ4/8���ֽ�
//	printf("%d\n", sizeof(a[1]));// 4 a[1]��ʾ�ڶ���Ԫ�أ�sizeof(a[1])��ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));//4/8 &a��ʾȡ��������ĵ�ַ������ĵ�ַ���ǵ�ַ
//	printf("%d\n", sizeof(*&a));//16 &a����ĵ�ַ�������ַ�Ľ����÷������飬sizeof���������Ĵ�С
//	printf("%d\n", sizeof(&a + 1));//4/8 ��ʾ����ĵ�ַ����һ�����飬���ǵ�ַ
//	printf("%d\n", sizeof(&a[0]));//4 ��һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1));//4 �ڶ���Ԫ�صĵ�ַ
//	return 0;
//}
int main()
{
	//�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6 ����������Ĵ�С6*1=6
	//printf("%d\n", sizeof(arr + 0));//4/8 arr+0��ʾ��Ԫ�ص�ַ����ַ��4/8���ֽ�
	//printf("%d\n", sizeof(*arr));//1 ��һ��Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1]));//1 �ڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&arr));//4/8 ����ĵ�ַ
	//printf("%d\n", sizeof(&arr + 1));//4/8 ����ĵ�ַ+1
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
	
	char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6 strlen(const char*p)����ŵ��ǵ�ַ��arr��ʾ��Ԫ�ص�ַ
	//printf("%d\n", strlen(arr + 0));//6 ��ʾ��a�ĵ�ַ�������ַ��ĸ���
	//printf("%d\n", strlen(*arr));//err *arr��ʾ�ַ�a,strlen��a������ַ����ascll����97����ʱ�Ƿ������ڴ�
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6 ��ʾ��������ĵ�ַ����a�ĵ�ַһ��
	//printf("%d\n", strlen(&arr + 1));//���ֵ ����һ������ĵ�ַ�����治֪��ʲôʱ������0
	//printf("%d\n", strlen(&arr[0] + 1));//5 ��ʾ��b�ĵ�ַ������

	printf("%d\n", sizeof(arr));//7 ���������������Ĵ�С��7*1=7
	printf("%d\n", sizeof(arr + 0));//4/8 ��ʾ��һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*arr));//1 a�Ĵ�С
	printf("%d\n", sizeof(arr[1]));//1 b�Ĵ�С
	printf("%d\n", sizeof(&arr));//4/8 ��ʾ����ĵ�ַ
	printf("%d\n", sizeof(&arr + 1));//4/8 ���ǵ�ַ
	printf("%d\n", sizeof(&arr[0] + 1));//4/8 b�ĵ�ַ
	return 0;
}