#include<stdio.h>
int main()
{
	int x = 1;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	while (x <= 9)
	{
		int y = 0;
		while (y <= 8)
		{
			int a = arr[y];
			int c = x * a;
			printf("%d*%d=%d\n", x, a, c);
			y++;
		}
		x++;
	}
	return 0;
}