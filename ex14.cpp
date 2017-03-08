#include<stdio.h>
int deyear(int year){
	if(year%4==0&&year%100!=0||year%400==0)
		return 1;
	else 
		return 0;
}
int dedays(int year,int month,int day){
	int i,days=0;
	int days1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int days2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if(deyear(year)){
		for(i=1;i<month;i++){
			days+=days1[i];
		}
	}
	else{
		for(i=1;i<month;i++){
			days+=days2[i];
		}
	}
	printf("%d",days+day);
}
int main(){
	int year,month,day;
	scanf("%d",&year);
	scanf("%d",&month);
	scanf("%d",&day);
	dedays(year,month,day);
}
