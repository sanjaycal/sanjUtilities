#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){
	int statusmv;
	
	FILE *fptr;
	
	if(argc == 3){
		long lsize;
		char *buffer;
		
		fptr = fopen(argv[1],"rb");
		if( !fptr ){
			perror(argv[1]);
			exit(1);
		}
		
		fseek(fptr, 0L, SEEK_END);
		
		lsize = ftell(fptr);
		
		rewind(fptr);
		
		buffer = calloc(1, lsize+1);
		if(!buffer){
			fclose(fptr);
			fputs("malloc failed", stderr);
			exit(1);
		}
		
		if(1!=fread(buffer, lsize, 1, fptr)){
			fclose(fptr);
			free(buffer);
			fputs("everything fails",stderr);
			exit(1);
		}

		fclose(fptr);
				
		int statusmv = rename(argv[1],argv[2]);
		
		fptr = fopen(argv[1],"w");
		
		int statuscp = 	fputs(buffer, fptr);
		
		if (statuscp == EOF){
			fclose(fptr);
			free(buffer);
			fputs("copying failed", stderr);
			exit(1);
		}	
		
		fclose(fptr);
		
		free(buffer);
	}
	return statusmv;	
}
