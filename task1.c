#include<stdio.h>


int main(){
int N,i,j;
	printf("please provide the number of asterisks:");
	scanf("%d",&N);
	for (i=0;i<N;i++){
	for (j=0;j<=N-i;j++)
	printf(" ");
	for (j=0;j<=i;j++)
	printf("*");
	printf("\n");
	};
	












return 0;
}
