#include<stdio.h>
using namespace std;
int main(int argv,int ** argc)
{
	int a, b;
	scanf("%x", &a);
	printf("%d %o %o", a, a >> 3, ~a);//выводим число в дутетеричной,сдвигаем на 3 бита вправо,
	scanf("%o", &b);
	printf("%d", a | b);//исключающее или
	return 0;
}
