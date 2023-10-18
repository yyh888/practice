#include <iostream>
#include <mutex>

using namespace std;

mutex mtx;

//class Single
//{
//public:
//	static Single* GetSingle()
//	{
//		if (_s == nullptr)
//		{
//			mtx.lock();
//			if (_s == nullptr)
//			{
//				_s = new Single;
//			}
//			mtx.unlock();
//		}
//		return _s;
//	}
//private:
//	Single()
//	{}
//	Single(const Single&) = delete;
//	Single& operator=(const Single&) = delete;
//	static Single* _s;
//};
//
//Single* Single::_s = nullptr;
//
//int main()
//{
//	Single::GetSingle();
//	return 0;
//}


