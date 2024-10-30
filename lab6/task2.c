#include<stdio.h>
#include<stdlib.h>

int main(){
char * str=malloc(1*sizeof(char));
char * flipstr = malloc(1*sizeof(char));
int i;
	printf("please enter the string: ");
	i=0;

	do{
		i++;
		str= (char *) realloc(str,i*sizeof(char));
		scanf("%c",&str[i]);

	}while(str[i]!=' ');

	for(int j=0;j<i;j++){
	flipstr[j]=str[i-j];
	str= (char *) realloc(str,(i-j-1)*sizeof(char));
	flipstr= (char *) realloc(flipstr,(j+1)*sizeof(char));
	};

	for(int j=0;j<=i;j++)
	printf("%c",flipstr[j]);

}
