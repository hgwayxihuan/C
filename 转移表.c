#include<stdio.h>
int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
	do
	{
		printf("*************************\n");
		printf(" 1:add      2:sub \n");
		printf(" 3:mul      4:div \n");
		printf("*************************\n");
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = add(x, y);
			printf("ret = %d\n", ret);
			break;
		case 2:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = sub(x, y);
			printf("ret = %d\n", ret);
			break;
		case 3:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = mul(x, y);
			printf("ret = %d\n", ret);
			break;
		case 4:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = div(x, y);
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			breark;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}