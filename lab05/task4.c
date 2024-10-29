#include<stdio.h>

int StringLength(char sentence[]);
int NumOfWords(char sentence[],int strLength);
int NumOfVowels(char sentence[],int StrLength);
int VowelFreq(int,char sentence[],char vowel);
int main(){

char sentence[100];
int length,word,nvow,fvow;
char vow;
printf("please enter your sentence");
scanf("%[^\n]s",sentence);
length=StringLength(sentence);
word=NumOfWords(sentence,length);
nvow=NumOfVowels(sentence,length);
printf("please enter the vowel you are looking for ");
scanf(" %c",&vow);
fvow=VowelFreq(length,sentence,vow);
printf(" length of string is %d, number of words is %d,number of vowels is %d,frequency of vowel %c is %d",length,word,nvow,vow,fvow);
return 0;
}


int StringLength(char sentence[]){
int i=0;
	while(sentence[i]!='\0'){
	i+=1;
	}

return i;
}

int NumOfWords(char sentence[],int strLength){
int i=1;
	for(int j=0;j<strLength;j++){
	if (sentence[j-1]==' ' && sentence[j]!='\0' &&sentence[j]!=' ')
		i+=1;
	}
return i;
}

int NumOfVowels(char sentence[],int StrLength){
int i=0;
	for (int j=0;j<StrLength;j++){
	if(sentence[j]=='a' ||sentence[j]=='e' ||sentence[j]=='o' ||sentence[j]=='u' ||sentence[j]=='i' ||sentence[j]=='A' ||sentence[j]=='E' ||sentence[j]=='O' ||sentence[j]=='U' ||sentence[j]=='I' )
	i+=1;	
	
	
	}

return i;
}

int VowelFreq(int length,char sentence[],char vowel){
int i=0;
int j=0;
char vowel2;
if(vowel <'a')
vowel2=vowel+0x20;
else 
vowel2=vowel-0x20;
	for (i=0;i<length;i++){
	if(sentence[i]==vowel || sentence[i]==vowel2)
	j+=1;
	}
return j;
}
