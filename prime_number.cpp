#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int a, b;
	printf("����������ѯ���������䣺");
	scanf("%d%d", &a, &b);
	for (int i = a==1 ? 2:a ; i <= b; i++) {
		int flag = 1;//�������������
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) { flag = 0; break; }
		}
		if (flag) printf("%d ", i);
	}
	return 0;
}