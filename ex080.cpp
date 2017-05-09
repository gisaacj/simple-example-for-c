#include<stdio.h>
main(){
	int x,y,z;
	for(x=0;x<10;x++)
		for(y=0;y<10;y++)
			for(z=0;z<10;z++)
				if(x*100+y*110+12*z==532)
					printf("%d,%d,%d",x,y,z);
}
