#include<stdio.h>
void mul(int rows,int cols,int x[cols],int A[rows][cols],int y[rows]);
int main(){
int cols,rows;
printf("please enter the number of columns: ");
scanf("%d",&cols);
printf("please enter the number of rows: ");
scanf("%d",&rows);
int x[cols];
int A[rows][cols];
int y[rows];
	for(int i=0;i<rows;i++)
		for(int j=0;j<cols;j++){
		
			printf("enter the element  (%d,%d) for the matrix\n",i,j);
			scanf("%d",&A[i][j]);
		
		}

	for(int i=0;i<cols;i++){
	printf("please enter the %d element of the vector",i);
	scanf("%d",&x[i]);
	
	}

	
	mul(rows,cols,x,A,y);
	printf("values for y is \n");
	for (int i=0;i<rows;i++)
	printf("%d\n",y[i]);







return 0;
}


void mul(int rows,int cols,int x[cols],int A[rows][cols],int y[rows]){
	for(int i=0;i<rows;i++){

	y[i]=0;
	
	for(int j=0;j<cols;j++){
	y[i]=A[i][j]*x[j]+y[i];

	}
	}
}

