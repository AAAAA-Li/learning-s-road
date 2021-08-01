#include<stdio.h>
//int global = 2021;//用于1-3-1的演示



//int num2 = 20;//全局变量--定义在代码块（{}）之外的变量
//
//int main()
//{
//	
//	int num1 = 10; //局部变量--相对应 定义在代码块之内的变量
//	return 0;
//}



//int num2 = 20;
//int main()
//{
//
//	int num1 = 10; 
//	int num2 = 30;
//	printf("num2=%d", num2);//输出了局部变量
//	return 0;





//int main()
//{
//	{
//		int a = 20;//局部变量只能使用在该局部（其所处代码块）
//	}
//	printf("%d\n", a);
//	return 0;
//
//}




//int main()
//{
//	//计算两个数的和 //鉴于可能有很大的数字 所以使用了long long整型
//	long long num1 = 0;
//	long long num2 = 0;
//	long long sum = 0;
//	
//	//输入数据--使用函数scanf
//	printf("input your first number\n");
//	scanf_s("%lld", &num1);//&取地址符号 意思是 第一个数字放num1的地址处 第二个数字放num2地址处
//	printf("input your second number\n");
//	scanf_s("%lld", &num2);
//	//C语言语法规定 变量要定义在当前代码块最前面
//	sum = num1 + num2;
//	printf("sum=%lld\n", sum);
//	return 0;
//}