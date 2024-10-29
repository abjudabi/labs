#include<stdio.h>

int main(){
int i;
int intar[4];
char charar[4];
short shortar[4];
double doublear[4];
int * intp=&intar[0];
char * charp=&charar[0];
short * shortp=&shortar[0];
double * doublep=&doublear[0];

	printf("integer Array: \n");
	for (i=0;i<4;i++){
	printf("%p \n",intp);
	intp+=1;
	}

	printf("char Array: \n");
	for (i=0;i<4;i++){
	printf("%p \n",charp);
	charp+=1;
	}
	printf("short Array: \n");
	for (i=0;i<4;i++){
	printf("%p \n",shortp);
	shortp+=1;
	}
	printf("double Array: \n");
	for (i=0;i<4;i++){
	printf("%p \n",doublep);
	doublep+=1;
	}



return 0;
}
