#include<stdio.h>
//πÈ≤¢≈≈–Ú  
void merge(int r[],int s[],int x1,int x2,int x3){
	int i,j,k;
	i=x1;
	j=x2+1;
	k=x1;
	while((i<x2+1)&&(j<x3+1))
		if(r[i]<=r[j]){
			s[k]=r[i];
			i++;
			k++;
		}
		else{
			s[k]=r[j];
			j++;
			k++;
		}
		while(i<=x2)
			s[k++]=r[i++];
		while(j<=x3)
			s[k++]=r[j++];
}
void sort(int r[],int s[],int m,int n){
	int p;
	int t[20];
	if(m==n)
		s[m]=r[m];
	else{
		p=(m+n)/2;
		sort(r,t,m,p);
		sort(r,t,p+1,n);
		merge(t,s,m,p,n);
	}	
}
int main(){
	int i;
	int a[5]={12,7,9,6,3};
	sort(a,a,0,4);
	for(i=0;i<5;i++)
		printf("%d",a[i]);
	return 0;
}
