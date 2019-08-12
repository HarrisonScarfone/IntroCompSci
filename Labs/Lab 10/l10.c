#include <stdio.h>

int main(int argc, char *argv[]){

	FILE *f;
	char a;

	if (argc != 2){
		printf("Invalid argument :(");
	}

	f = fopen(argv[1], "r");

	if(f == 0){
		printf("Something went wrong opening the file :(");
	}else{

		a = fgetc(f);

		while(a != EOF){
			printf("%c", a);
			a = fgetc(f);
		}
	}

	fclose(f);

	return 0;

}