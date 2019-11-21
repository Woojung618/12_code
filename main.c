#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int i=23;
	char input[100];
	FILE *fp;
	fp=fopen("sample.txt","r");
	for (i=0;i<3;i++){
		//printf("input a word: ");
		//scanf("%s",input);
		//fprintf(fp,"%s\n",input);
		fscanf(fp,"%s",input);
		printf("%s\n",input);
	}
	fclose(fp);
	return 0;
	
}
