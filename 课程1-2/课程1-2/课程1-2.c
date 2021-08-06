#include <stdio.h>

//int main()
//{
//	char ab = 'B';//char表示字符类型
//	printf("%c", ab);//%c--打印字符格式的数据 此处字符就是上行中的char中的ch
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(char)); //1字节=8个比特位 一个比特位就是一个数字大小
	printf("%d\n", sizeof(short));//2字节
	printf("%d\n", sizeof(int));//4字节
	printf("%d\n", sizeof(long));//4或者8字节
	printf("%d\n", sizeof(long long));//8字节
	printf("%d\n", sizeof(float));//4字节
	printf("%d\n", sizeof(double));//8字节
	return 0;
}
// bit byte kb mb gb tb pb
//    8  1024............ 