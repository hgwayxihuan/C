#include<stdio.h>
//дһ�������������ַ���
//#include<string.h>
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	//scanf("%s", arr);scanf�����ո������
//	reverse(arr);//abcdef-fedcba
//	printf("%s", arr);
//	return 0;
//}

//������ͣ���Sn=a+aa+aaa+aaaa,a��n������
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//2 4
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//}

//��1~10000��������
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		//ȷ��i�м�λ��-n
//		int sum = 0;
//		int tmp = i;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		//��i��ÿλ����n�η�֮��-sum
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//�ж�sum�Ƿ���i���
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	int i = 0;
//	int j = 0;
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*(line-i-1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

