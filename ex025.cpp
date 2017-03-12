#include<stdio.h>
search(int key,int a[],int n){
	int low,high,mid,count=0,count1=0;
	low=0;
	high=n;
	while(low<high){
		count++;
		mid=(low+high)/2;
		if(key<a[mid])
			high=mid-1;
		else if(key>a[mid])
			low=mid+1;
		else if(key==a[mid]){
			printf("%d次找到,第%d位",count,mid+1);
			count1++;
			break;
		}
	}
	if(count1==0)
		printf("no found");
}
int main(){
	int a[6]={3,5,8,12,34,76};
	search(12,a,6);
}
