#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;

int main()
{
	int val = 1;
	mutex mtx;
	condition_variable cv;
	int flag = 1;
	thread t1([&]() {
		while (val <= 100)
		{
			unique_lock<mutex> lock(mtx);
			while (flag != 1)
			{
				cv.wait(lock);
			}
			flag = 2;
			if (val > 100)
			{
				cv.notify_all();
				break;
			}
			cout << "thread1-> " << val << endl;
			val++;
			cv.notify_all();
		}
		});
	thread t2([&]() {
		while (val <= 100)
		{
			unique_lock<mutex> lock(mtx);
			while (flag != 2)
			{
				cv.wait(lock);
			}
			flag = 3;
			if (val > 100)
			{
				cv.notify_all();
				break;
			}
			cout << "thread2-> " << val << endl;
			val++;
			cv.notify_all();
		}
		});
	thread t3([&]() {
		while (val <= 100)
		{
			unique_lock<mutex> lock(mtx);
			while (flag != 3)
			{
				cv.wait(lock);
			}
			flag = 1;
			if (val > 100)
			{
				cv.notify_all();
				break;
			}
			cout << "thread3-> " << val << endl;
			val++;
			cv.notify_all();
		}
		});
	t1.join();
	t2.join();
	t3.join();
	return 0;
}

