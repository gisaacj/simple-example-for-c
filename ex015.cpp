#include<stdio.h>
int main(){
int a,b,c;
for(a=0;a<3;a++)
	for(b=0;b<3;b++)
		for(c=0;c<3;c++)
			if(a!=0&&c!=0&&c!=2&&a!=b&&a!=c&&b!=c){
				printf("AÓë%c\n",'X'+a);
				printf("BÓë%c\n",'X'+b);
				printf("CÓë%c\n",'X'+c);
			}
return 0;
} 
