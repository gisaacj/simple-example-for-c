#include<stdio.h>
void sort(int s[],int l,int r){
	int i=l,j=r;
	int x=s[l];
	while(i<j){
		while(i<j&&x<s[j])
			j--;
		if(i<j){
			s[i]=s[j];
			i++;
		}
		while(i<j&&s[i]<x)
			i++;
		if(i<j){
			s[j]=s[i];
			j--;
		}
	}
	s[i]=x;
	if(l<i)
		sort(s,l,j-1);
	if(i<r)
		sort(s,j+1,r);
}
int main(){
	int i,a[5]={12,6,5,9,3};
	sort(a,0,4);
	for(i=0;i<5;i++)
	printf("%d",a[i]);
	return 0;
}
