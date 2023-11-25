//------------------------------------------------------------------
//File Name : return_matrix
//Author : Winter_snow
//Version : ver0_1
//Created : 2023 / 11 / 25
//Description : Main Function :按需要赋值并输出回型矩阵
//History:
//<author>           <version>       <time>       
//Winter_snow         ver0_1         2023 / 11 / 25  
//------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void return_matrix(int a[][30],int n) {
	int top = 0, button, left = 0, right,
		L = 0, r, t, b;
	int count = 1;
	button = n - 1; right = n - 1;
	while (!(top == button && left == right)) {//回型赋值
		while (count <= n * n && L <= right) {
			a[top][L] = count;
			count++;
			L++;
		}
		if (count <= n * n) { top++; t = top; }
		while (count <= n * n && t <= button) {
			a[t][right] = count;
			count++;
			t++;
		}
		if (count <= n * n) { right--; r = right; }
		while (count <= n * n && r >= left) {
			a[button][r] = count;
			count++;
			r--;
		}
		if (count <= n * n) { button--; b = button; }
		while (count <= n * n && b >= top) {
			a[b][left] = count;
			count++;
			b--;
		}
		if (count <= n * n) { left++; L = left; }
	}
	if (n % 2 != 0) { a[top][left] = count; }
}
int main() {
	int a[30][30];
	int n = 0;
	scanf("%d", &n);
	return_matrix(a, n);
	for (int i = 0; i < n; i++) {//遍历输出
		for (int j = 0; j < n; j++) {
			printf("%-3d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}