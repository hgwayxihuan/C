//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8 ָ������Ĵ�С4/8���ֽڣ�p��ŵ��ǵ�һ���ַ��ĵ�ַ����ַ��С4/8
//	printf("%d\n", sizeof(p + 1));//4/8 p+1�ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*p));//1 *p��ʾ�ַ�a��a�Ĵ�С��1
//	printf("%d\n", sizeof(p[0]));//1 arr[0] == *(arr+0)  p[0] = *(P+0) ��ʾ��һ��Ԫ��
//	printf("%d\n", sizeof(&p));//4/8 p�ĵ�ַ
//	printf("%d\n", sizeof(&p + 1));//4/8 ����ָ�����p��һ����ַ
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
//
//	printf("%d\n", strlen(p));//6 p��ʾa�ĵ�ַ
//	printf("%d\n", strlen(p + 1));//5 p+1��ʾb�ĵ�ַ
//	printf("%d\n", strlen(*p));//err *p��ʾ�ַ�a,���a(��97)������ַ����ʱ��ַ������ģ��Ƿ�����
//	printf("%d\n", strlen(p[0]));//err p[0]��ʾ�ַ�a,���a(��97)������ַ����ʱ��ַ������ģ��Ƿ�����
//	printf("%d\n", strlen(&p));// ���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5 ��ʾb�ĵ�ַ
//	return 0;
//}
//int main()
//{
//	��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 sizeof(������)����������Ĵ�С3*4*4=48 
//	printf("%d\n", sizeof(a[0][0]));//4 ��һ�е�һ��Ԫ�صĴ�С
//	printf("%d\n", sizeof(a[0]));//16 a[0]�Ƕ�ά�������Ԫ�ص�ַ,��������a[0]����Ĵ�С
//	printf("%d\n", sizeof(a[0] + 1));//4/8 a[0]+1��ʾ��һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 ��ʾ��һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(a + 1));//4/8 a+1�ڶ�������ĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16 �ڶ�������Ĵ�С
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 �ڶ�������Ĵ�С
//	printf("%d\n", sizeof(*a));//16 ��һ�������С
//	printf("%d\n", sizeof(a[3]));//16 �����������Сsizeof����������͵Ĵ�С��������ʵ������
//	return 0;
//}