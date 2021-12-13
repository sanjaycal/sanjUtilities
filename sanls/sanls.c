#include <dirent.h>
#include <stdio.h>

int main(int argc, char **argv){
	DIR *d;
	struct dirent *dir;
	if (argc==2){
	d = opendir(argv[1]);
	}
	if (argc == 1){
	d = opendir(".");
	}	
	if(d){
		while((dir = readdir(d))!=NULL){
			printf("%s\n",dir->d_name);
		}
		closedir(d);
	}
	
	return 0;
}
