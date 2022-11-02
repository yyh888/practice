#include "Test.h"

int main()
{
	yyh::string s1("a");
	s1.push_back('b');
	s1 += "cde";
	yyh::string s2("abcdef");
	cin >> s2;
	cout << s2 << endl;
	return 0;
}