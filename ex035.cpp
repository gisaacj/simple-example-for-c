#include<stdio.h>
int main(){
	int num,i,j,k,a[16]={0};
	printf("请输入一个十进制数(0-32767)\n");
	scanf("%d",&num); 
	for(i=0;i<15;i++){
		j=num%2;
		k=num/2;
		num=k;
		a[i]=j;
	}
	for(i=15;i>0;i--)
		printf("%d",a[i]);
	return 0;
}
