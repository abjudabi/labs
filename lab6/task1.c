#include<stdio.h>
#include<stdlib.h>
void add(int size,int z[size],int x[size],int y[size],int a,int b);
int main(){

int size,*z,*x,*y,a,b,i;
	printf("please enter the size of vectors:");
	scanf("%d",&size);
	z=(int *) malloc(size*sizeof(int));	
	y=(int *) malloc(size*sizeof(int));
	x=(int *) malloc(size*sizeof(int));
	if(x==NULL||y==NULL||z==NULL){
	printf("error memory was not allocated");
	return 0;
	};
	printf("please provide the value for a");
	scanf("%d",&a);
	printf("please provide the value for b");
	scanf("%d",&b);	
	printf("please provide the values for vector x\n");
	for(i=0;i<size;i++){
	printf("value of %d element : ",i);
	scanf("%d",&x[i]);
	};

	printf("please provide the values for vector y\n");
	for(i=0;i<size;i++){
	printf("value of %d element : ",i);
	scanf("%d",&y[i]);
	};
	add(size,z,x,y,a,b);
	printf("values for z:\n");
	for(i=0;i<size;i++)
	printf("%d : %d \n",i,z[i]);
	free(x);
	free(y);
	free(z);
	
return 0;
}



void add(int size,int z[size],int x[size],int y[size],int a,int b){
int i;
	for(i=0;i<size;i++)
	z[i]=a*x[i]+b*y[i];
}
