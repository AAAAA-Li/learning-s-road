#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//字符串类型
//int main()
//{
//	"abcdef";
//	"hello world";
//	"";//空字符串
//	//上述都叫字符串 
//	return 0；
//
//}

//int main()
//{
//	char arr1[] = "abc";//数组 字符串"abc"相当于'a','b','c','\0' 所谓\0是字符串的结束标志
//	char arr2[] = { 'a', 'b', 'c'};
//	char arr3[] = { 'a', 'b', 'c' ,'\0'};// \0不是字符 \0是结束标志 其隐藏在字符串末尾 不算作长度
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//
//}
//为了方便存储 给每个符号、字面都编了一个码 
//比如a--97 A--65 这种编码方式叫ASCII编码
//字符所对应值叫作ASCII码值
//ASCII编码表需要全部背

//int main()
//{
//	char arr1[] = "abc";//输出长度3
//	char arr2[] = { 'a','b','c' };//输出了15？？  哦哦我知道了 之前printf输出{'a','b','c'}的时候看见是abc烫烫烫烫荫bc 14位（汉字占两位）后面就是\0 
//	printf("%d\n", strlen(arr1));//strlen--string length C语言提供以计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//使用\\以防止\被解释为转义序列符
//int main()
//{
//	printf("a\\b\\c\\n\n"); //输出的是a\b\c\n
//	printf("c:test\32\test.c\n"); //输出的是/c:test箭头est.c
//	printf("c:test\\32\\test.c\n"); //输出的是c:test\32\test.c
//	printf("(are you ok\?\?)\n"); //  ??)会输出]  \?输出就是?
//	printf("%c\n", '\'');//如果写成'''会无法输出 前面一对单引号成对 后面剩一个单引号
//	printf("%d\n", 'a');//这里会输出a对应的ASCII码
//	return 0;
//}

//int main()
//{
//	printf("c:\test\32\test.c\n");
//	printf("%d\n", strlen("c:\test\32\test.c"));//输出13   \32 /后加数字意义为：两个8进制数字，其代表的是其对应的那个十进制数字作为ASCII码值所对应的字符
//	printf("%d\n", strlen("c:\\test\\32\\test.c"));//输出17   // 那么\32如何转换成10进制数字呢 3 2 以下
//	return 0;        //3在第二个位置 =8的一次方 2在第一个位置=8的零次方 所以32作为八进制代表的十进制数字是3*8……1+2*8……0=26  26作为ASCII码代表的字符
//					 //26作为ASCII码代表的是一个向右的箭头 所以\32代表的就是一个向右的箭头 
//					 //值得注意的是 因为\后加数字是八进制数字 不能写大于7的数字
//				     //又有\xdd dd为数字 那么\x后面的数字是16进制数字 转换规则跟上述相似 都要最终转换为ASCII码值对应的字符
//	                 //自然\xdd dd数字不能大于15 (因为是16进制嘛)
//}                  