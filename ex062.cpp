#include<stdio.h>
int main(){
	char c1,c2;
	printf("输入一个小写字母\n");
	c1=getchar();
	c2=c1-32;
	printf("%c,%d\n",c2,c2);
}
