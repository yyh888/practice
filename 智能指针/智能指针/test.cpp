#include <iostream>
#include <mutex>
#include <memory>
#include <atomic>
using namespace std;

//int main()
//{
//	unique_ptr<int> p1(new int(1));
//	unique_ptr<int> p2(move(p1));
//	return 0;
//}


namespace yyh
{
	template <class T>
	class unique_ptr
	{
	public:
		unique_ptr(T* ptr)
		{
			_ptr = ptr;
			_pcnt = new int(1);
		}

		~unique_ptr()
		{
			(*_pcnt)--;
			if (*_pcnt == 0)
			{
				delete _ptr;
				delete _pcnt;
			}
		}

		T& operator*()
		{
			return *_ptr;
		}

		T* operator->()
		{
			return _ptr;
		}

		T& operator[](size_t pos)
		{
			return _ptr[pos];
		}

		unique_ptr(const unique_ptr<T>& uptr)
			: _ptr(uptr._ptr)
			, _pcnt(uptr._pcnt)
		{
			(*_pcnt)++;
		}

		unique_ptr<T>& operator=(const unique_ptr<T>& uptr)
		{
			if (_ptr != uptr._ptr)
			{
				(*_pcnt)--;
				if (*_pcnt == 0)
				{
					delete _ptr;
					delete _pcnt;
				}
				_ptr = uptr._ptr;
				_pcnt = uptr._pcnt;
				(*_pcnt)++;
			}
			return *this;
		}

		// 获取引用计数值
		int use_count()
		{
			return *_pcnt;
		}
	private:
		T* _ptr;
		atomic<int*> _pcnt;
	};
}

void test()
{
	const int N = 100000;
	yyh::unique_ptr<int> sp1(new int[10]);

	std::thread t1([&]() {
		for (int i = 0; i < N; i++)
		{
			yyh::unique_ptr<int> sp2 = sp1;
		}
		});
	std::thread t2([&]() {
		for (int i = 0; i < N; i++)
		{
			yyh::unique_ptr<int> sp3 = sp1;
		}
		});
	t1.join();
	t2.join();
	cout << sp1.use_count() << endl;
}


int main()
{
	test();
	return 0;
}