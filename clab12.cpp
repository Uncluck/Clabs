#include<stdio.h>
#include<sys/stat.h>
int main(int argc, char **argv)
{
	int n;
	char dir[100];
	FILE *f;
	f = fopen("nope", "wt");
	int i;
	for(i = 1; i < argc; ++i){
		if(mkdir(argv[i]) == 0){
			fputs(argv[i], f);//запись в командную строку
			fputs("\n", f);
		}else{
			printf("GHGH");
		}
	}
	fclose(f);//закрываем файл
}
