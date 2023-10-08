#include <iostream>

using namespace std;

//class StockPrice {
//public:
//    map<int, int> times;// 时间: 价格
//    map<int, int> cnts;// 价格: 次数
//
//    StockPrice() {
//
//    }
//
//    void update(int timestamp, int price) {
//        if (times.count(timestamp))
//        {
//            int p = times[timestamp];
//            times[timestamp] = price;
//            cnts[price]++;
//            if (--cnts[p] == 0) cnts.erase(p);
//        }
//        else
//        {
//            cnts[price]++;
//            times[timestamp] = price;
//        }
//    }
//
//    int current() {
//        return times.rbegin()->second;
//    }
//
//    int maximum() {
//        return cnts.rbegin()->first;
//    }
//
//    int minimum() {
//        return cnts.begin()->first;
//    }
//};


//int main()
//{
//	int p = 0x12345678;
//	int* a = &p;
//	char* b = (char*)a;
//	if (*b == 0x78) cout << "小端" << endl;
//	return 0;
//}


//union Test
//{
//	int a;
//	char b;
//};
//
//int main()
//{
//	Test t;
//	t.a = 0x12345678;
//	cout << (0x78 == t.b);
//	return 0;
//}



