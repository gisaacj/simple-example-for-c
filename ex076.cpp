#include<stdio.h>
main(){
	float a,b;
	char c;
	printf("输入运算格式,a(+,-,*,/)b\n");
	scanf("%f%c%f",&a,&c,&b);
	switch(c){
		case '+':printf("%f\n",a+b);break;
		case '-':printf("%f\n",a-b);break;
		case '*':printf("%f\n",a*b);break;
		case '/':if(!b) printf("除数不能为零");else printf("%f\n",a/b);break;
		default:printf("输入有误");
	}
}
