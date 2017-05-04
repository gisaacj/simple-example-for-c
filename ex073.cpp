#include<stdio.h>
main(){
	float salary=500;
	int k;
	int profit;
	printf(" ‰»Îœ˙ €∂Ó");
	scanf("%d",&profit);
	if(profit%1000==0)
		k=profit/1000;
	else
		k=profit/1000+1;
	switch(k){
		case 0:
		case 1:
		case 2:break;
		case 3:
		case 4:
		case 5:
			salary+=profit*0.08;
			break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			salary+=profit*0.1;
			break;
		default:
			salary+=profit*0.12;
			break;
	}
	printf("%5.2f",salary);
}
