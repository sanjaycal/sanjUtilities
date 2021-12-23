#include <stdlib.h>
#include <stdio.h>
#include <string.h>




void update(int software){
	if(software == 0){
		system("sudo wget -O santext https://github.com/sanjaycal/sanjUtilities/blob/master/santext/santext?raw=true");
		system("sudo chmod +x santext");
		system("sudo mv santext /bin");
	}
	if(software == 1){
		system("sudo wget -O sancat https://github.com/sanjaycal/sanjUtilities/blob/master/sancat/sancat?raw=true");
		system("sudo chmod +x sancat");
		system("sudo mv sancat /bin");
	}
	if(software == 2){
		system("sudo wget -O sancopy https://github.com/sanjaycal/sanjUtilities/blob/master/sancopy/sancopy?raw=true");
		system("sudo chmod +x sancopy");
		system("sudo mv sancopy /bin");
	}
	if(software == 3){
		system("sudo wget -O sandate https://github.com/sanjaycal/sanjUtilities/blob/master/sandate/sandate?raw=true");
		system("sudo chmod +x sandate");
		system("sudo mv sandate /bin");
	}
	if(software == 4){
		system("sudo wget -O sanls https://github.com/sanjaycal/sanjUtilities/blob/master/sanls/sanls?raw=true");
		system("sudo chmod +x sanls");
		system("sudo mv sanls /bin");
	}
	if(software == 5){
		system("sudo wget -O sanmove https://github.com/sanjaycal/sanjUtilities/blob/master/sanmove/sanmove?raw=true");
		system("sudo chmod +x sanmove");
		system("sudo mv sanmove /bin");
	}
	if(software == 6){
		system("sudo wget -O sanremove https://github.com/sanjaycal/sanjUtilities/blob/master/sanremove/sanremove?raw=true");
		system("sudo chmod +x sanremove");
		system("sudo mv sanremove /bin");
	}
}



int main(int argc, char *argv[]){
	
	if(argc==2){
		if (strcmp(argv[1],"update")==0){
			for (int i = 0; i < 7; i++)
			{
				update(i);
			}
			
		}
	}

	return 0;
}
