#include<stdio.h>
static int N = 1;	//���徲̬��������̬��������ǰһ�εı���ֱֵ���������
int JC(int n) {
	register int i;		//����Ĵ���������ѭ�����������ѭ���ٶ�
	for (i = n; i >= 1; i--)
		N *= i;	//�۳ˣ�ʵ�ֽ׳�
}
void main() {
	int n;
	printf("������Ҫ��׳�����");
	scanf_s("%d", &n);
	JC(n);	//���ú���
	printf("%d���Ľ׳���%d", n, N);
 }