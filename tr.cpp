#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* encrypt(char *pre){
	int i=0,j[5]={0};
	char *ch;
	ch=(char*)malloc(1024);
	while(pre[i]!='\0'){
		if(i%5==0&&j[0]<i/5+(i%5)<1){
		ch[j[0]]=pre[i];
		j[0]++;
	}
	i++;
}
i=0;
	while(pre[i]!='\0'){
		if(i%5==1&&j[1]<i/5+(i%5)<2){
		ch[j[0]+j[1]]=pre[i];
		j[1]++;
	}
	i++;
}
i=0;
	while(pre[i]!='\0'){
		if(i%5==2&&j[2]<i/5+(i%5)<3){
		ch[j[0]+j[1]+j[2]]=pre[i];
		j[2]++;
	}
	i++;
}
i=0;
	while(pre[i]!='\0'){
		if(i%5==3&&j[3]<i/5+(i%5)<4){
		ch[j[0]+j[1]+j[2]+j[3]]=pre[i];
		j[3]++;
	}
	i++;
}
i=0;
while(pre[i]!='\0'){
		if(i%5==4&&j[4]<i/5+(i%5)<5){
		ch[j[0]+j[1]+j[2]+j[3]+j[4]]=pre[i];
		j[4]++;
	}
		i++;
	}
	ch[i]='\0';
	return ch;
} 
char* decrypt(char *pre){
	int i=0,j[5]={0},l;
	char *ch;
	ch=(char*)malloc(1024);
	while(pre[i]!='\0'){
		while(j[0]<(strlen(pre)/5+((strlen(pre)%5)>0))){
		ch[j[0]*5]=pre[i++];
		j[0]++;
	}
		while(j[1]<(strlen(pre)/5+((strlen(pre)%5)>1))){
		ch[j[1]*5+1]=pre[i++];
		j[1]++;
	}
		while(j[2]<(strlen(pre)/5+((strlen(pre)%5)>2))){
		ch[5*j[2]+2]=pre[i++];
		j[2]++;
	}
		while(j[3]<(strlen(pre)/5+((strlen(pre)%5)>3))){
		ch[5*j[3]+3]=pre[i++];
		j[3]++;
	}
		while(j[4]<(strlen(pre)/5+((strlen(pre)%5)>4))){
		ch[5*j[4]+4]=pre[i++];
		j[4]++;
	}
	}
	ch[i]='\0';
	return ch;
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
