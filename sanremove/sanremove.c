#include<stdio.h>


int main(int argc, char **argv){
	int status = remove(argv[1]);
	return 0;
}
