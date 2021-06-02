////代码1
//(*(void (*)())0)();//把0强制性转换为函数指针类型，该指针指向的函数的参数为无参，返回类型为void
//                   //把0的地址解引用，调用0为地址的函数
////代码2
//void (*signal(int, void(*)(int)))(int);//定义函数，函数的一个参数为int，一个参数为函数指针类型，
//                           该指针指向的参数为int，返回类型为void，而函数的返回类型也是函数指针类型
//typedef void (*my_fun)(int);
//my_fun signal(int, my_fun);
//函数指针数组
//#include<stdio.h>
//void test(char* a)
//{
//    printf("%s\n", a);
//}
//#include<stdio.h>
//int main()
//{
//    printf("%p\n", test);
//    printf("%p\n", &test);
//    void(*p)(char*) = test;
//    test("abc");
//    p("abc");
//    return 0;
//}
#include<stdio.h>
//void menu()
//{
//    printf("####################\n");
//    printf("##1. Add    2. Sub##\n");
//    printf("##3. Mul    4. Div##\n");
//    printf("##     0.exit     ##\n");
//    printf("####################\n");
//}
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int  Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    int ret = 0;
//    do
//    {
//        menu();
//        printf("请选择:>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("请输入两位操作数:>\n");
//            scanf("%d%d", &x, &y);
//            ret = Add(x, y);
//            printf("%d\n", ret);
//            break;
//        case 2:
//            printf("请输入两位操作数:>\n");
//            scanf("%d%d", &x, &y);
//            ret = Sub(x, y);
//            printf("%d\n", ret);
//            break;
//        case 3:
//            printf("请输入两位操作数:>\n");
//            scanf("%d%d", &x, &y);
//            ret = Mul(x, y);
//            printf("%d\n", ret);
//            break;
//        case 4:
//            printf("请输入两位操作数:>\n");
//            scanf("%d%d", &x, &y);
//            ret = Div(x, y);
//            printf("%d\n", ret);
//            break;
//        case 0:
//            break;
//        default :
//            printf("选择错误\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}

