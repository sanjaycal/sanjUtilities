#include <stdio.h>


int main(int argc, char **argv){
	int status;
	
	if(argc == 3){
		status = rename(argv[1],argv[2]);
	}
	return status;	
}
