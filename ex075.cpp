#include<stdio.h>
main(){
	float x,m1,m2,m;
	char y,z;
	scanf("%f,%c,%c",&x,&y,&z);
	switch(y){
		case 'a':
			m1=3.25;
			break;
		case 'b':
			m1=3.00;
			break;
		case 'c':
			m1=2.75;
			break;
	}
	switch(z){
		case 'n':
			m2=0;
			break;
		case 'm':
			m2=0.05;
			break;
		case 'c':
			m2=0.1;
			break;
	}
	m=x*m1-x*m1*m2;
	printf("����������:%c\n",y);
	printf("����ȼ���:%c\n",z);
	printf("�û�Ӧ�������:%.3f\n",m);
}
