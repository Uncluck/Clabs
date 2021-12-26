#include <iostream> 
using namespace std;
int main() {
    const int n = 9;
    int arr[n] = {99, 88, 77, 66, 55, 44, 33, 22, 11};
 
    for(int i = 0; i < n; ++i) {
    	printf("%d %d \n", i, arr[i]);
    }
    int arr1[2][2] = {{2, 5}, {2, 2}};//заполняем массив согласно варианту 
	int arr2[2][2] = {{1, 2}, {0, 1}};//тут тоже
	int result[2][2] = {0};
 
	for (int i = 0; i < 2; ++i){
		for (int j = 0; j < 2; ++j){
			for (int k = 0; k < 2; ++k){
               result[i][j] += arr1[i][k] * arr2[k][j];//перемножаем матрицы
			}
       }
   }
 
    printf("%d %d\n%d %d", result[0][0], result[0][1], result[1][0], result[1][1]);//выводим
}
