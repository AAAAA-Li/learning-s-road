#include<stdio.h>
#define  _CRT_SECURE_NO_WARNINGS 1

//操作符
//%--取余
//int main()
//{
//	int a = 5 % 2; //5除2等于2余1
//	printf("%d", a);
//	return 0;
//
//}


//移位操作符
//
// >>右移
// <<左移
//int main()
//{
//	int a = 1;
//	//整形1占4个字节-32bit位
//	//00000000000000000000000000000001  32个bit位等于存储32个数字 这32个数字是二进制数字0/1
//	//a<<1
//	//00000000000000000000000000000010  显然这里1往左一位了 难么他代表的十进制数字是1*2^1=2 所以b=2
//	int b = a << 1;
//	printf("%d", b);
//
//	return 0;
//}


//位操作符
//int main()
//{
//	//(2进制)位操作
//	// & 按位与 一个假就是假 两个真才是真
//	// | 按位或 一个真就是真 两个假才是假
//	// ^ 按位异或 对应的二进制位相同，则为0 对应的二进制位相异，则为1
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	//0是假 1是真 
//	//a = 3 = 0 1 1
//	//b = 5 = 1 0 1
//	//       一一对应
//	// &	  0 0 1--1
//	// |	  1 1 1--7
//	// ^      1 1 0==6
//	printf("%d,%d,%d", c,d,e);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;
//	a = a + 10;//也可以写成a += 10
//	a = a - 20;//也可以写成a -= 20
//	a = a & 2;//也可以写成a &= 2  1010 & 0010 = 0010 = 2
//	//注释中的符号都称为复合赋值符
//	printf("%d", a);
//	return 0;
//}


//单目操作符
//双目操作符
//三目操作符

//int main()
//{
//	//在C语言中 表示真假 0--假 一切非0都是假
//	int a = 10;
//	int b = 20;
//	//a + b 的加号就是双目操作符 因为符号旁有两个变量、字符
//	printf("%d\n", a);
//	printf("%d\n", !a);//!逻辑反操作 真变假 假变真 一切非0变成0 0变成1
//	return 0;
//
//}

//int main()
//{
//	int a = 80;
//	int sz = 0;
//	int arr[10] = { 0 };//10个整型元素的数组
//	printf("%d\n", sizeof (int));
//	printf("%d\n", sizeof(a));//计算的是变量/类型所占空间的大小，单位是字节 1字节等于8比特位 1byte = 8bit
//	printf("%d\n", sizeof(arr));
//	//计算数组的元素个数
//	//数组元素个数 = 数组总大小/每个元素大小
//	sz = sizeof(arr) / sizeof(arr[0]);// sizeof(arr[0]) 也可以写成 sizeof(int) 因为创建的是int元素的数组
//	printf("%d", sz);
//	
//	return 0;
//}

//
//字符串的结束标志："\0"
//"asd"="asd\0"
//'\0'-转义字符--ASCII码值--0

//EOF--end of file 文件结束标志



//写函数以比较两个数值较大值
