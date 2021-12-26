#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
	int k = 0, n = 0, len = 0, q1 = 0, q2 = 0, q3 = 0;
	float s = 0;
	char s1[100];
	printf("Number 1\n");
	gets(s1);
	len = strlen(s1); 
	for(int i = 0; i < len; ++i){
		if((s1[i] >= '0') && (s1[i] <= '9')){
			++q1;//если находим от 0 до 9 , то +1
		}
		if((s1[i] >= 'A') && (s1[i] <= 'Z')){
			++q2;//если находим от А до Z, то +1
		}
		if((s1[i] >= 'a') && (s1[i] <= 'z')){
			++q3;//если находим от а до z, то +1
		}
	}
	printf("Kol-vo cifr %d\n Kol-vo str bykv %d\n Kol-vo zaglav bykv %d\n", q1, q2, q3);
	printf("Number2\n");
	printf("mounth\n");
	scanf("%d", &n);
	printf("interest rate\n");
	scanf("%d", &k);
	printf("Deposit\n");
	scanf("%f", &s);
	for(int i = 0; i < n; ++i){
		s = s + ((s / 100 / 12) * k);//подсвет состояния банковского состояния
		printf("after %d mounth %.2f\n", i, s);
	}
}
