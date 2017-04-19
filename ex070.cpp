#include<stdio.h>
int main(){
	char c;
	printf("ÊäÈëÒ»¸ö×Ö·û:\n");
	scanf("%c",&c);
	if(c>=65&&c<=90)
		printf("´óÐ´×ÖÄ¸");
	else if(c>=97&&c<=122)
		printf("Ð¡Ð´×ÖÄ¸");
	else if(c>=48&&c<=57)
		printf("Êý×Ö");
	else
		printf("ÌØÊâ·ûºÅ");
} 
