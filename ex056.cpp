#include<stdio.h>
int main(){
	int x;
	printf("输入一个整数:\n");
	scanf("%d",&x);
	if(x%5==0&&x%7==0)
		printf("yes\n");
	else
		printf("no\n");
}
