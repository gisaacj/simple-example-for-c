#include<stdio.h>
void sort(int s[],int l){
	int i,j,d=l/2;
	while(d>0){
		for(i=d+1;i<l+1;i++){
			s[0]=s[i];
			j=i-d;
			while((j>0)&&(s[0]<s[j])){
				s[j+d]=s[j];
				j=j-d;
			}
			s[j+d]=s[0];
		}
		d/=2;
	}
} 
int main(){
	int i,a[6]={0,12,7,9,3,5};
	sort(a,5);
	for(i=1;i<6;i++)
	printf("%d",a[i]);
	return 0;
}
