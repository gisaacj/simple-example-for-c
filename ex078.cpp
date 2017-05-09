#include<stdio.h>
main(){
	int iSelect=1;
	while(iSelect!=0){
		printf("------Menu------\n");
		printf("----Sell--------\n");
		printf("----asd---------\n");
		printf("----Out---------\n");
		scanf("%d",&iSelect);
		switch(iSelect){
			case 1:printf("1");break;
			case 2:printf("2");break;
			case 3:printf("3");break;
			case 0:printf("out");break;
			default:printf("wrong");break;
		}
	}
	return 0;
}
