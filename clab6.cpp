#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

using namespace std;
int main()
{
    char arr[4];
    arr[0] = 'W';//заполняем массив согласно варианту
    arr[1] = 'O';//тут тоже
    arr[2] = 'R';//тут тоже
    arr[3] = 'K';//тут тоже
    char *p;
    p = &arr[0];
	for(int i = 0; i < 4;++i){
		printf("%c\n", *(p + i));//выводим массив используя указатель 
	}
	char *arr2;
	arr2 = (char*)malloc(4*sizeof(char));//создание массива динамической памяти
	arr2[0] = 'W';//заполняем его
    arr2[1] = 'O';
    arr2[2] = 'R';
    arr2[3] = 'K';
    for (int i = 0; i < 4; i++){
    	printf("%c", arr2[i]);//выводим 
	}
    free(arr2);//освобождаем память 
    return 0;
}
