#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Ctr(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int d = 0;
	int e = 0;
	int res = 0;
	printf("�������һ�����֣�");
	scanf("%d", &d);
	printf("������ڶ������֣�");
	scanf("%d", &e);
	res = Ctr(d, e);
	if (d == e)
		printf("һ����");
	else
	printf("�Ƚϴ�������ǣ�%d", res);
	return 0;
}