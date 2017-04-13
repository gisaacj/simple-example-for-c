#include<stdio.h>
ss(int i){
	int j;
	if(i<=1)
		return 0;
	if(i==2)
		return 1;
	for(j=2;j<i;j++){
		if(i%j==0)
			return 0;
		else if(i!=j+1)
			continue;
		else
			return 1;
	} 
}
main(){
	for(int i=10;i<1000;i++){
		if(i<100)
			if((i/10==i%10)&&ss(i))
				printf("%5d",i);
		if(i>100&&i/100==i%10&&ss(i))
			printf("%5d",i);
	}
}
