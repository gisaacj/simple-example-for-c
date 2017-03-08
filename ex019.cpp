#include<stdio.h>
void sort(int s[], int n) {   //自定义排序函数 两个参数为传入数组及数组长度
	int i, j;
	for (i = 2;i < n + 1;i++) {
		s[0] = s[i];
		j = i - 1;
		while (s[0] < s[j]) {
			s[j + 1] = s[j];
			j--;
		}
		s[j + 1] = s[0];
	}
}
int main() {
	int i,a[6] = { 0,12,6,5,9,4 };
	sort(a, 5);
	for (i = 1;i < 6;i++)
		printf("%d", a[i]);
}
