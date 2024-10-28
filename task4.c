#include<stdio.h>


int main(){
int pop[10],i,pop_max,pop_min,sum=0;

	for(int i =0;i<10 ; i++){	
	printf("please provide the population for city number %d ",i);
	scanf("%d",&pop[i]);
	};
	for (i=0;i<10;i++){
	printf("%d " ,pop[10-i]);
	};
sum=0;
pop_max=pop[0];
pop_min=pop[0];
	for(i=0;i<10;i++){
	sum+=pop[i];
	if (pop_max<pop[i])
		pop_max=pop[i];
	if(pop_min>pop[i])
		pop_min=pop[i];

	};
	printf("the maximum is %d and the minimum is %d and the average is %f",pop_max,pop_min,sum*1.0/10);















return 0;
}
