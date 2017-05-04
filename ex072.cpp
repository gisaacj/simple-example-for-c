#include<stdio.h>
#include<stdlib.h>
main(){
	int button;
	system("cls");
	printf("**********************\n");
	printf("*   可选择的按键:    *\n");
	printf("*   1、巧克力        *\n");
	printf("*   2、蛋糕          *\n");
	printf("*   3、可口可乐      *\n");
	printf("**********************\n");
	printf("从1~3中选择按键:\n");
	scanf("%d",&button);
	switch(button){
		case 1:
			printf("你选择了巧克力");
			break;
		case 2:
			printf("你选择了蛋糕");
			break;
		case 3:
			printf("你选择了可口可乐");
			break;
		default:
			printf("输入错误");
			break;
	}
	printf("\n");
}
