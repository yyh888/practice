#include <iostream>
#include <stack>

using namespace std;

//struct Task
//{
//	int n;
//	char a;
//	char b;
//	char c;
//	Task(int _n, char _a, char _b, char _c)
//		: n(_n)
//		, a(_a)
//		, b(_b)
//		, c(_c)
//	{}
//};
//
//int cnt = 0;
//
//void Hannoi(int n, char a, char b, char c)
//{
//	stack<Task> st;
//	st.push({ n, a, b, c });
//	while (st.size())
//	{
//		Task t = st.top();
//		st.pop();
//		if (t.n == 1)
//		{
//			cnt++;
//			cout << t.a << "->" << t.c << " " << cnt << endl;
//		}
//		else
//		{
//			st.push({ t.n - 1, t.b, t.a, t.c });
//			st.push({ 1, t.a, t.b, t.c });
//			st.push({ t.n - 1, t.a, t.c, t.b });
//		}
//	}
//}

//int cnt = 0;
//
//void Hannoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		cnt++;
//		cout << a << "->" << b << " " << cnt << endl;
//	}
//	else
//	{
//		Hannoi(n - 1, a, c, b);
//		cnt++;
//		cout << a << "->" << b << " " << cnt << endl;
//		Hannoi(n - 1, b, a, c);
//	}
//}

int main()
{
	Hannoi(3, 'a', 'b', 'c');
	return 0;
}