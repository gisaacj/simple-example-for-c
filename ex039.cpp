#include<stdio.h>
int main(){
	int n;
	float s1,s2;
	for(n=11;;n++){
		s1=(n+9)/10.0;
		s2=(9*n+171)/100.0;
		if(s1==s2)
			break;
	}
	printf("%d",n);
	return 0;
}
