#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (){
srand(time(0));
int x,y,i,j,flag;  
x= rand()%10;
y=rand()%10;

	for(i=0;i<=9;i++){
	for(j=0;j<=9;j++){
	if (i==x && j==y){
	printf("Hurrah!, I have found the hidden treasure at (%d,%d)\n",x,y);
	flag =1;
	break;
	}
	else
	printf("stil looking I am at location (%d,%d)\n",i,j);
	
	
	
	
	};
	
	if (flag==1)
	break;	
	};













return 0;
}
