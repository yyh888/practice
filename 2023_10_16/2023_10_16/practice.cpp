#include <iostream>

using namespace std;

//class Solution {
//public:
//    vector<int> singleNumber(vector<int>& nums) {
//        int n = nums.size();
//        long long key = 0;
//        for (auto& e : nums) key ^= e;
//        long long ret = key & -key;
//        vector<int> n1, n2;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] & ret)
//            {
//                n1.push_back(nums[i]);
//            }
//            else
//            {
//                n2.push_back(nums[i]);
//            }
//        }
//        int a = 0, b = 0;
//        for (int i = 0; i < n1.size(); i++)
//        {
//            a ^= n1[i];
//        }
//        for (int i = 0; i < n2.size(); i++)
//        {
//            b ^= n2[i];
//        }
//        return { a, b };
//    }
//};

//int main()
//{
//	int&& aa = 1;
//	string&& str = "abcdefg";
//	return 0;
//}

//void Fun(int& x) { cout << "左值引用" << endl; }
//void Fun(const int& x) { cout << "const 左值引用" << endl; }
//
//void Fun(int&& x) { cout << "右值引用" << endl; }
//void Fun(const int&& x) { cout << "const 右值引用" << endl; }
//
//// 万能引用
//template <class T>
//void fun(T&& i)
//{
//	&i;
//	Fun(i);
//}
//
//int main()
//{
//	int a = 1;
//	fun(a);// 左值
//	fun(std::move(a));// 右值
//	const int b = 1;
//	fun(b);// const左值
//	fun(std::move(b));// const右值
//	return 0;
//}


//void fun(int&& i)
//{
//
//}
//
//int main()
//{
//	int i = 0;
//	int&& ii = move(i);
//	return 0;
//}



