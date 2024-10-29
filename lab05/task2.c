#include<stdio.h>

int main (){

int a=0x02;
char * end=(char *)&a;

printf("%d \n",*end);
printf("%p \n",end);












return 0; 
}
