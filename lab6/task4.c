#include<stdio.h>
#include<stdlib.h>
int * stack;
void push();
void pop();
void disp();
void ex();

int i=0;
int main(){

char choice;
stack=(int *)malloc(0);
	while(1){
	printf("Enter a command (p:push, o:pop, d: display, e: exit) : ");
	scanf(" %c",&choice);
	switch (choice){
	
		case 'p':
			push();
			break;
		case 'o':
			pop();
			break;
		case 'd':
			disp();
			break;
		case 'e': 
			ex();
			return 0;	
	
	
	}
	
	
	
	}


}


void push(){
i++;
	printf("Enter an integer to push ");
	stack = (int *)realloc(stack,i*sizeof(int));
	scanf("%d",&stack[i-1]);

}

void pop(){
	if(i==0){
	printf("no value to pop\n");
	return;
	
	}
	printf("Popped value : %d \n",stack[i-1]);
	i--;
	stack = (int *)realloc(stack,i*sizeof(int));
}

void disp(){

	printf("current stack: ");
	for(int j=0;j<i;j++){

		if(i==1)
		printf("%d",stack[0]);
		else if(j!=i-1)
		printf("%d, ",stack[i-j-1]);
		else 
		printf("%d ",stack[0]);
	}
	printf("\n");
}

void ex(){
free(stack);
printf("Exiting the program. All memory has been freed.");


};
