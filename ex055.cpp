#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int a,b,c,sign,max;
	char sign1;
	printf("��ѡ�������(1 or other,1:-,other:+):\n");
	scanf("%d",&sign);
	printf("��ѡ��������(<10000):\n");
	scanf("%d",&max);
	srand((unsigned long)time(0));
	a = rand()%max;
	b = rand()%max;
	while(a<b&&sign==1){
		a=rand()%max;
		b=rand()%max;
	}
	sign1=(sign==1?'-':'+');
	printf("\n%d%c%d=",a,sign1,b);
	scanf("%d",&c);
	if((sign==1)&&(a-b==c)||(sign!=1)&&(a+b==c))
		printf("������ȷ\n");
	else
		printf("�������\n");
	return 0;
}
