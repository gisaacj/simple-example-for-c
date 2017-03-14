#include<stdio.h>
int main(){
	int i,j,num,s1,s2;
	scanf("%d",&num);
	s1=num*num*num;
	j=1;
	while(s1!=s2){
		s2=0;
		for(i=j;i<s1/2+2;i+=2){
			s2+=i;
			if(s2==s1)
				break;
		}
		j+=2;
	}
	printf("%d*%d*%d=%d",num,num,num,i);
	for(;i>j-1;i-=2)
	printf("+%d",i-2);
	return 0;
}
