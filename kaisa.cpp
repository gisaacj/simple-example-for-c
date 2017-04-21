#include<stdio.h>
#include<stdlib.h>
char* encrypt(char *pre){
	int i=0;
	while(pre[i]!='\0'&&pre[i]){
		if(pre[i]>=65&&pre[i]<=90)
		pre[i]=155-pre[i];
		if(pre[i]>=97&&pre[i]<=122)
		pre[i]=219-pre[i];
		i++;
	}
	return pre;
} 
char* decrypt(char *pre){
	int i=0;
	while(pre[i]!='\0'){
		if(pre[i]>=65&&pre[i]<=90)
		pre[i]=155-pre[i];
		if(pre[i]>=97&&pre[i]<=122)
		pre[i]=219-pre[i];
		i++;
	}
	return pre;
} 
int main(){
	char *ch;
	int choose;
	ch=(char*)malloc(1024);
	printf("请选择加密还是解密(1.加密/2.解密)");
	scanf("%d",&choose);
	fflush(stdin);
	gets(ch);
	if(choose==1)
	ch=encrypt(ch);
	else if(choose==2)
	ch=decrypt(ch);
	printf("%s",ch);
} 
