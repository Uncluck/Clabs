#include <stdio.h>
#include<cmath>
enum First {
	classic = 9,
    pop = 3,
    rap = 4,
    newage = 45,
    electronics = 8,
    rock = 7,
};
struct Triandle {
    int x1;//точки треугольника
    int x2;//тут тоже
    int y1;
    int y2;
    int z1;
    int z2;
};
struct Elem {
    unsigned Ready: 1;//дефолт знач равно 1, выдкляется 1 бит
    unsigned Toner: 1;//тут тоже
    unsigned Drum: 1;//и тут 
    unsigned Paper: 1;//и тут 
};
union Laser {
    int status;
    struct Elem structElem;
};
int main(int argv, char ** argc)
{
	enum First a, b, c, d, j, f;
	a = classic;
	b = pop;
	c = rap;
	d = newage;
	j = electronics;
	f = rock;
	printf("%d\n", 1);//печатаем
	printf("%d\n", f);
	printf("%d\n", 2);	
	struct Triandle structTriandle;
	scanf("%d %d %d %d %d %d", &structTriandle.x1, &structTriandle.x2, &structTriandle.y1, &structTriandle.y2, &structTriandle.z1, &structTriandle.z2);//считываем значения
	double k1 = sqrt((structTriandle.y1-structTriandle.x1)*(structTriandle.y1-structTriandle.x1)+(structTriandle.y2-structTriandle.x2)*(structTriandle.y2-structTriandle.x2));//посчеты
	double k2 = sqrt((structTriandle.z1-structTriandle.y1)*(structTriandle.z1-structTriandle.y1)+(structTriandle.z2-structTriandle.y2)*(structTriandle.z2-structTriandle.y2));//подсчеты
	double k3 = sqrt((structTriandle.z1-structTriandle.x1)*(structTriandle.z1-structTriandle.x1)+(structTriandle.z2-structTriandle.x1)*(structTriandle.z2-structTriandle.x1));//подсчеты
	printf("%lf\n", k1+k2+k3);
	union Laser unionLaser;
    struct Elem elem;
	scanf("%x", &unionLaser.status);
	printf("%d %d %d %d\n", unionLaser.structElem.Ready, unionLaser.structElem.Toner, unionLaser.structElem.Drum, unionLaser.structElem.Paper);
}
