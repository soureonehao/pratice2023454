#include<stdio.h>
static int N = 1;	//定义静态变量，静态变量保留前一次的变量值直到程序结束
int JC(int n) {
	register int i;		//定义寄存器，用于循环变量，提高循环速度
	for (i = n; i >= 1; i--)
		N *= i;	//累乘，实现阶乘
}
void main() {
	int n;
	printf("请输入要求阶乘数：");
	scanf_s("%d", &n);
	JC(n);	//调用函数
	printf("%d他的阶乘是%d", n, N);
 }