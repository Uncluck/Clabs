#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	const  double pi = 3.1415;//������� ��������� ��
	scanf("%f", a);
	double z1 = 2*sin(3*pi-2*a)-sin(3*pi-2*a)*cos(5*pi+2*a)*cos(5*pi+2*a);//������� �������
	double z2 = 2*sin(a);//������� 2�� �������
	printf("%f %f", z1, z2);//�����
	return 0;
}
