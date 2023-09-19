#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//int fun(const char* str1, const char* str2)
//{
//	int sz1 = strlen(str1);
//	int sz2 = strlen(str2);
//	for (int i = 0; i <= sz1 - sz2; i++)
//	{
//		if (str1[i] == str2[0])
//		{
//			bool flag = true;
//			for (int j = 0; j < sz2; j++)
//			{
//				if (str1[i + j] != str2[j])
//				{
//					flag = false;
//					break;
//				}
//			}
//			if (flag) return i;
//		}	
//	}
//	return -1;
//}
//
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "defe";
//	printf("%d\n", fun(str1, str2));
//	return 0;
//}


//int main()
//{
//	string s;
//	cin >> s;
//	ReadLine(s, ": ");
//	return 0;
//}


//namespace yyh
//{
//	void* strcpy(char* desc, const char* sour)
//	{
//		char* p = desc;
//		while (*desc++ = *sour++);
//		return p;
//	}
//}
//
//
//int main()
//{
//	char a[10];
//	const char* str = "abc";
//	yyh::strcpy(a, str);
//	cout << a << endl;
//	return 0;
//}