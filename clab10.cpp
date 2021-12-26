#include <stdio.h>
#include <math.h>
#include<string>
int NOD(int a, int b){//функция нахождения НОД
    while (a != b){
        if (a > b){
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int NOK(int a, int b){//функция нахождения НОК
    return abs(a * b)/NOD(a, b);
}
int chislo(int k, int arr[])//функция нахождения суммы цифр заданного числа
{
	int i = 0, q = k;
	while(q > 0){
		arr[i] = q % 10;
		q = q / 10;
		++i;
	}
	return i;
}
int main(){
    int a, b, arr[5], k, dl;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("Zadanie1\n");
    printf("NOK = %d\nNOD = %d\n", NOK(a, b), NOD(a, b));
    printf("Zadanie2\n");
    scanf("%d", &k);
    dl = chislo(k, arr);
    for(int i = dl - 1; i >= 0; --i){
    	printf("%d ", arr[i]);
	}
    return 0;
}
