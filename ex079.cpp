#include<stdio.h>
main(){
	int i,j,k;
	for(i=0;i<=10;i++)
		for(j=0;j<=5;j++)
			for(k=0;k<=2;k++)
				if(i+j*2+k*5==10)
					printf("1:%d,2:%d,5:%d\n",i,j,k);
}
