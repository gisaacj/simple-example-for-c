#include<stdio.h>
int main(){
	int a,d,i;
	for(a=1;a<6;a++)
		for(d=1;d<5;d++){
			if(4*a+6*d==26&&(a*(a+d)*(a+2*d)*(a+3*d)==880))
				for(i=0;i<20;i++)
					printf("%d ",a+i*d);
		}
}
