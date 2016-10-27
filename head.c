#include<stdio.h>

int main(int argc , char * argv[]) {
	FILE * fp;
	
	char * line = NULL;
	int len =0;
	int cnt=0;
		if(argc < 2) {
			printf(" needs more arguments \n");
			printf("enter file name and number of lines \n");
		}
	fp=fopen(argv[1],"r");
	if(!fp) {
		printf("\n files cannot be opened ", argv[1]);
		return 1;
	}
	while(getline(&line ,&len , fp) !=-1) {
		cnt++;
		if(cnt > atoi(argv[2]))
		break;
		printf("%s", line);
		}
	if(getline(&line ,&len , fp) ==-1) {
		printf("empty file \n");
	}
	fclose(fp); 
	
}
