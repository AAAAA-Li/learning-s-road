#include <stdio.h>

//int main()
//{
//	char ab = 'B';//char��ʾ�ַ�����
//	printf("%c", ab);//%c--��ӡ�ַ���ʽ������ �˴��ַ����������е�char�е�ch
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(char)); //1�ֽ�=8������λ һ������λ����һ�����ִ�С
	printf("%d\n", sizeof(short));//2�ֽ�
	printf("%d\n", sizeof(int));//4�ֽ�
	printf("%d\n", sizeof(long));//4����8�ֽ�
	printf("%d\n", sizeof(long long));//8�ֽ�
	printf("%d\n", sizeof(float));//4�ֽ�
	printf("%d\n", sizeof(double));//8�ֽ�
	return 0;
}
// bit byte kb mb gb tb pb
//    8  1024............ 