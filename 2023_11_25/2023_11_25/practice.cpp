#include <iostream>

using namespace std;

class A
{
public:
	void fun()
	{
		cout << "hello world" << endl;
	}
	int i = 100;
};

int main()
{
	A().fun();
	return 0;
}