#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,s,n;
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b&&b==c)
		printf("�ȱ�");
		else if(a==b||b==c||a==c)
		printf("����");
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		printf("ֱ��");
		else
		printf("����");
		n=(a+b+c)/2;
		s=(float)sqrt(n*(n-a)*(n-b)*(n-c));
		printf("%f",s);
	}
}
