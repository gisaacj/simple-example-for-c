#include<stdio.h>
struct index{
	int key;
	int start;
	int end;
}index_table[4];

int search(int key,int a[]){
	int i,j;
	i=1;
	while(i<=3&&key>index_table[i].key)
		i++;
	if(i>3)
		return 0;
	j=index_table[i].start;
	while(j<=index_table[i].end&&a[j]!=key)
		j++;
	if(j>index_table[i].end)
		j=0;
	return j;
}
