#include<stdio.h>
int main(){
	int n,i,s[4];
		for(i=10;i*i>99&&i*i<1000;i++){
			s[0]=i*i;
			s[1]=s[0]%10;
			s[2]=s[0]/10%10;
			s[3]=s[0]/100;
			if(s[1]==s[2]||s[2]==s[3]||s[3]==s[1])
				printf("%d ",s[0]);
		}
	return 0;
}
