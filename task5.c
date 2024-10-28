#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
srand(time(0));
int pix[10][10][3];
float gray[10][10];

for(int i=0;i<10;i++){
for(int j=0;j<10;j++) {
pix[i][j][0]=rand()%256;
pix[i][j][1]=rand()%256;
pix[i][j][2]=rand()%256;
}
}

for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
gray[i][j]=0.299*pix[i][j][0]+0.587*pix[i][j][1]+0.114*pix[i][j][2];
}
}

printf("R || G || B || grayscale\n");
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
printf("  %d  ||  %d  ||  %d  ||  %.2f  \n",pix[i][j][0],pix[i][j][1],pix[i][j][2],gray[i][j]);
}
}

return 0;
}
