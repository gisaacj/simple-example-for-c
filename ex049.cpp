#include<stdio.h>
main(){
	int a,b,c,d,e;
	for(a=0;a<2;a++)
		for(b=0;b<2;b++)
			for(c=0;c<2;c++)	
				for(d=0;d<2;d++)
					for(e=0;e<2;e++){
						if((a&&b+c+d+e==3||!a&&b+c+d+e!=3)&&(b&&a+c+d+e==0||!b&&a+c+d+e!=0)&&(c&&a+b+d+e==1||!c&&a+b+d+e!=1)&&(d&&a+b+c+e==4||!d&&a+b+c+e!=4))
						printf("a=%d,b=%dc=%d,d=%d,e=%d",a,b,c,d,e);
					}
}
