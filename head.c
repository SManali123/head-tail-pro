
/*****************************************************************************
 * Copyright (C) Manali.SShetye. manali.shetye136053@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "head.h"

int findarr(char *str, char ch){
	int i;
	for(i = 0;i<4;i++){
		if(str[i] == ch)
			return i;
	}
}

int main(int argc, char *argv[])
{	
	FILE *fp1; 
	char *filename1; 
	
	FILE *fp;           // File pointer stream
	char *filename;     // get the file name from argument line test
	int count=0, n=10;  // count to check number of lines, n to check 
	int i, myop = 0;
	char ch, *str;
	char arr[4] = {'v','c','q','n'};
	char *string[100];	


	str = (char *)malloc(sizeof(char));
	// Check argument line passing
	if(argc < 2)
	{
		printf("Please enter correct format for head information");
		return -1;
	}
	
	// If we have only 2 arguements 
	if(argc == 2) {
		filename = argv[1];
		fp = fopen(filename,"r");

		if(fp==NULL) {
			printf("File not found, check the error %d\n",errno);
      			return -1;
		}
		
		head(n,fp);
	}
	else
	{
		str = argv[1];
		ch = str[1];
		printf("\nch = %c\n", ch);
		
		int find = findarr(arr, ch);
		printf("\n find = %d",find);
		switch(find){
			case 0:
				filename = argv[2];

			fp = fopen(filename,"r");



			if(fp==NULL) {

				printf("File not found, check the error %d\n",errno);

      				return -1;
			}	

			printf("<===%s===>\n",filename);

			head(n,fp);
			break;
			case 1:
				
				filename = argv[2];
				fp = fopen(filename,"r");
				if(fp==NULL) {
				printf("File not found, check the error %d\n",errno);
      				return -1;
				}
				
			        myop = atoi(argv[1]);
			        while((fp, "%c",string)!='\0') {
					if(count == myop) {
						break;
					}
					else {
						printf("%c",fgetc(fp));
					}
					count++;
				}

			break;
			case 2:
				filename = argv[2];
				fp = fopen(filename,"r");

				if(fp==NULL) {
					printf("File not found, check the error %d\n",errno);
	      				return -1;
				}
				head(n,fp);
			break;
			case 3:
				
				n = atoi(argv[2]);
				filename = argv[3];
				fp = fopen(filename,"r");

				if(fp==NULL) {
					printf("File not found, check the error %d\n",errno);
	      				return -1;
				}
			
				if(n>0) {
				head(n,fp);
				}
			
		}

	}
	
	if(argc == 3) {         
			filename = argv[2];
			filename1 = argv[3];
			fp = fopen(filename,"r");
			fp1 = fopen(filename1, "r");
			if(fp==NULL && fp1==NULL ) {
				printf("File not found, check the error %d\n",errno);
	      			return -1;
			}
		
		
			head(n,fp);
		}

	if(argc == 5) {

		if((strcmp(argv[1],"-n")==0)&&(strcmp(argv[3],"-q")==0)) {

				filename = argv[4];
				fp = fopen(filename,"r");

					if(fp==NULL) {
						printf("File not found %d\n",errno);
		      				return -1;
					}
					head(n,fp);
		                
					n = atoi(argv[2]);
			
			
					if(n>0)	{
						head(n,fp);
					}
			
		}
	}
fclose(fp);
fclose(fp1);
	return 0;


} // end main
void head(int n_lines, FILE *fp)
{
	buffer = (char *)malloc(sizeof(char)*n_bytes);
	
	int count = 0;

	while(fgets(buffer,sizeof(char)*n_bytes,fp)!=NULL && count<n_lines)
	{
		count++;
		printf("%s",buffer);
	}
	free(buffer);
}
	



