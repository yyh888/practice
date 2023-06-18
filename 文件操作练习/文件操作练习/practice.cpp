#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;

int main()
{
	// 1
	std::ofstream ofs("test.txt");
	ofs << "123456789 abc";
	// 2
	std::string s;
	std::ifstream ifs("test.txt");
	cout << s;
	ifs >> s;
	return 0;
}