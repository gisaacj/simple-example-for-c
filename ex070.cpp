#include<stdio.h>
int main(){
	char c;
	printf("����һ���ַ�:\n");
	scanf("%c",&c);
	if(c>=65&&c<=90)
		printf("��д��ĸ");
	else if(c>=97&&c<=122)
		printf("Сд��ĸ");
	else if(c>=48&&c<=57)
		printf("����");
	else
		printf("�������");
} 
