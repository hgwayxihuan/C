#include <stdio.h>
#include <math.h>
void main()
{
	double b, a = 4;
	b = sqrt(a);
	printf("%f\n", b);
}
#include <stdio.h>
void fun(char* c, int d)
{
	*c = *c + 1;
	d = d + 1;
	printf("%c,%c,", *c, d);
}
void  main()
{
	char a = 'A', b = 'a';
	fun(&b, a);
	printf("%c,%c\n", a, b);
}
#include <stdio.h>
void main()
{
    struct c
    {
        int x;
        int y;
    }s[2] = { 10,100,20,200 };

    printf("%d", ++(s[1].x));
}


