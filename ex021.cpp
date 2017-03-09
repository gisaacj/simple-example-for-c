#include<stdio.h>
void sort(int s[],int l){
	int i,j,t;
	for(i=0;i<l;i++)
		for(j=0;j<l-i-1;j++)
			if(s[j]>s[j+1]){
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
} 
int main(){
	int i,a[5]={12,5,7,3,9};
	sort(a,5);
	for(i=0;i<5;i++)
	printf("%d",a[i]);
	return 0;
}
