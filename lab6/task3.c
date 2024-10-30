#include<stdio.h>
#include<stdlib.h>
int * ptr;
int values();
float average(int size);
void subt(int size,float average,float sample[]);
void disp(float samples[],int size,float avg);



int main(){
int size;
float avg;
size= values();
int * samples= malloc(size*sizeof(int));
avg=average(size);
subt(size,avg,samples);
disp(samples,size,avg);

}


int values(){

char app;
int i=0;

	do{
	ptr = (int *) realloc(ptr,(i+1)*sizeof(int));
	printf("Enter a sample integer value : ");
	scanf("%d",&ptr[i]);
	printf("Do you want to add more samples? (y/n): ");
	scanf(" %c",&app);

	
	i++;	
	}while(app !='n'&& app!='0');

return i;
}

float average(int size){
int sum=0;
	for(int i=0;i<size;i++){
	sum+=ptr[i];
	
	}
return sum*1.0/size;
}
void subt(int size,float average,float sample[]){

	for (int i=0;i<size;i++){
	sample[i]=ptr[i]-average;
	
	}


}
void disp(float samples[],int size,float avg){
	
	printf("you entered the following samples: ");
	for(int i=0;i<size;i++){
		printf("%d",ptr[i]);
		if(i!=size-1)
			printf(", ");
	};
	
	printf("\n calculated average (DC value): %f \n",avg);
	printf("Final adjusted samples after DC shift :\n");
	for(int i=0;i<size;i++)
		printf("%f ",samples[i]);

}
