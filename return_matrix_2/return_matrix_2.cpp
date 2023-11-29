//------------------------------------------------------------------
//File Name : return_matrix_2
//Author : Winter_snow
//Version : ver0_2
//Created : 2023 / 11 / 30
//Description : Main Function :按需要赋值并输出回型矩阵
//History:
//<author>           <version>       <time>       
//Winter_snow         ver0_2         2023 / 11 / 30  
//------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void return_matrix(int a[][30], int n) {
	int top = 0, bottom, left = 0, right,//矩形大小
		L = 0, r, t, b;//四个赋值用的变量
	int count = 1;//用于从1开始赋值
	bottom = n - 1; right = n - 1;
	while (!(top == bottom && left == right)) {//回型赋值
		while (L <= right) {
			a[top][L] = count;
			count++;
			L++;
		}
		if (count <= n * n) { top++; t = top; }
		while (t <= bottom) {
			a[t][right] = count;
			count++;
			t++;
		}
		if (count <= n * n) { right--; r = right; }
		while (r >= left) {
			a[bottom][r] = count;
			count++;
			r--;
		}
		if (count <= n * n) { bottom--; b = bottom; }
		while (b >= top) {
			a[b][left] = count;
			count++;
			b--;
		}
		if (count <= n * n) { left++; L = left; }
	}
	if (n % 2 != 0) { a[top][left] = count; }
}
int main() {
	int a[30][30];//暂定为一个小型矩阵，所以二维数组小一点
	int n = 0;//用户输入矩阵边长
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