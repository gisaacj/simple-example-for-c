#include<stdio.h>
#include<stdlib.h>
main(){
	int button;
	system("cls");
	printf("**********************\n");
	printf("*   ��ѡ��İ���:    *\n");
	printf("*   1���ɿ���        *\n");
	printf("*   2������          *\n");
	printf("*   3���ɿڿ���      *\n");
	printf("**********************\n");
	printf("��1~3��ѡ�񰴼�:\n");
	scanf("%d",&button);
	switch(button){
		case 1:
			printf("��ѡ�����ɿ���");
			break;
		case 2:
			printf("��ѡ���˵���");
			break;
		case 3:
			printf("��ѡ���˿ɿڿ���");
			break;
		default:
			printf("�������");
			break;
	}
	printf("\n");
}