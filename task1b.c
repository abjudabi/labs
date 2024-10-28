#include<stdio.h>


int main(){
int N,i,j;
	printf("please provide the number of asterisks:");
	scanf("%d",&N);
/*	for (i=0;i<N;i++){
	for (j=0;j<=N-i;j++)
	printf(" ");
	for (j=0;j<=i;j++)
	printf("*");
	printf("\n");
	};*/
	i=1;
	while(i<=N){
	j=1;
	while(j<=N-i){
	printf(" ");
	j+=1;
	};
	j=1;
	while(j<=i){
	printf("*");
	j+=1;
	};
	
	printf("\n");
	
	
	
	i+=1;
	};	












return 0;
}
