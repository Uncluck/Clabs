#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int i = 0, j = 0;
	char s1[100], s2[100], c;
	gets(s1);//��������� �����
	gets(s2);//� ��� ����
	strncat(s1,s2,3);//�������� ������ � ������ ������
	printf("1\n");
	printf("%s\n", s1);
	gets(s1);
	gets(s2);
	strcpy(s1,s2);//����������� ����� ������ � ������
	printf("2\n");
	printf("%s\n", s1);
	printf("3\n");
	fflush(stdin);
	gets(s1);
	fflush(stdin); 
	scanf("%c", &c);
	char* ptr;
	ptr = strchr(s1, (char)c);//����� ������� ��������� ���������� �������
	if (*ptr){
		printf("%d\n", ptr - s1);
	}else{
		printf("������ �� ������\n");
	}
	gets(s1);
	gets(s2);
	printf("4\n");
	int k = strspn(s1,s2); //����� ������� ����� ������ ������ ������� ������
	printf("%d\n", k);
	return 0;

}

