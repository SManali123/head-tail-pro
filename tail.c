#include <stdio.h>

int main(int argc , char * argv[]) {
	FILE * fp;
	char str[100];
	int len =0;
	int count=0;
		if(argc < 2) {
			printf(" needs more arguments \n");
			printf("enter file name and number of lines \n");
		}
	fp=fopen(argv[1],"r");
	if(!fp) {
		printf("\n files cannot be opened ", argv[1]);
		return 1;
	}
	
	fseek(fp, 0, SEEK_END);
	len = ftell(fp);
	while(len) {
		if(!fseek(fp, --len, SEEK_SET)) {
		if(fgetc(fp) =='\n')
		if(count++ == len)
			break;
	}
	else
		perror("fseek() failed");
}
	while(fgets(str, sizeof(str) , fp)) {
	printf("%s",str);
	}
	printf("\n\n");
}
		



