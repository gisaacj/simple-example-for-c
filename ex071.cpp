#include<stdio.h>
int main(){
	int i,j;
	float s[6];
	for(i=0;i<4;i++)
		scanf("%f",&s[i]);
	s[5]=s[6]=s[0]; 
	for(i=0;i<4;i++){ 
			if(s[i]<s[5])
				s[5]=s[i];
			if(s[i]>s[6])
				s[6]=s[i];
	}	
	printf("min=%.2f,max=%.2f",s[5],s[6]);
}
