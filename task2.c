#include<stdio.h>
int main(){

int min,i;
	printf("please enter the number of minutes");
	scanf("%d",&min);
	printf("M:S	(M=minutes,S=Seconds) \n");
	for (i=0;i<min*60;i++){
	if (i/60<10 && i%60<10)
	printf("0%d :0%d \n",i/60,i%60);
	else if(i/60<10 && i%60>10)
	
	printf("0%d :%d \n",i/60,i%60);
	
	else if(i/60>10 && i%60<10)
	printf("%d :0%d \n",i/60,i%60);
	else if(i/60>10 && i%60>10)
	printf("%d :%d \n",i/60,i%60);
	};








return 0;
}
