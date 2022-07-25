#include<stdio.h>
#include<stddef.h>


//#define EXCHANGE(n) n = ((((n & 0x55555555)) << 1) + (((n & 0xaaaaaaaa) >> 1)))
//
//int main()
//{
//	int n = -2;
//	EXCHANGE(n);
//	printf("%d", n);
//	return 0;
//}



#define MYOFFSTTOF(type, m_name)      (size_t)&(((type*)0)->m_name)


struct A
{
	int a;
	char b;
	int c;
};

int main()
{
	int ret1 = MYOFFSTTOF(struct A, a);
	int ret2 = MYOFFSTTOF(struct A, b);
	int ret3 = MYOFFSTTOF(struct A, c);
	printf("%d %d %d", ret1, ret2, ret3);
	return 0;
}