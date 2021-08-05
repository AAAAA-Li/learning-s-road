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
	printf("请输入第一个数字：");
	scanf("%d", &d);
	printf("请输入第二个数字：");
	scanf("%d", &e);
	res = Ctr(d, e);
	if (d == e)
		printf("一样大");
	else
	printf("比较大的数字是：%d", res);
	return 0;
}