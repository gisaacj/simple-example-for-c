#include<stdio.h>
main(){
	float a,b;
	char c;
	printf("���������ʽ,a(+,-,*,/)b\n");
	scanf("%f%c%f",&a,&c,&b);
	switch(c){
		case '+':printf("%f\n",a+b);break;
		case '-':printf("%f\n",a-b);break;
		case '*':printf("%f\n",a*b);break;
		case '/':if(!b) printf("��������Ϊ��");else printf("%f\n",a/b);break;
		default:printf("��������");
	}
}