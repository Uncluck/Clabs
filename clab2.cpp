#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	const  double pi = 3.1415;//заводим константу пи
	scanf("%f", a);
	double z1 = 2*sin(3*pi-2*a)-sin(3*pi-2*a)*cos(5*pi+2*a)*cos(5*pi+2*a);//считаем формулу
	double z2 = 2*sin(a);//считаем 2ую формулу
	printf("%f %f", z1, z2);//вывод
	return 0;
}
