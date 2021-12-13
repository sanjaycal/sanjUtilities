#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){

	if(argc == 1){
		printf("\nSancat is a Command Line Utility that functions very similarly to cat. to use, run\n\nsancat FILENAME\n\nThis will cause the contents of FILENAME to print out into the console\n\n");
		return 0;
	}
	
	
		
	FILE *fptr;

	char c;
		
	fptr = fopen(argv[1], "r");
	
	if(fptr == NULL){
		printf("Cannot open file");
		return 0;
	}
	
	c = fgetc(fptr);
	
	while (c != EOF){
		printf("%c",c);
		c = fgetc(fptr);
	}
	
	fclose(fptr);
	return 0;
}
