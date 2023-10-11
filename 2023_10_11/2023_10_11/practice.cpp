#include <iostream>
#include <vector>
#include <string>

using namespace std;

//vector<int> fun()
//{
//	vector<int> ret{ 1, 2, 3, 4, 5, 6 };
//	return ret;
//}
//
//int main()
//{
//	vector<int>&& res = fun();
//	for (auto& e : res) cout << e << " ";
//	return 0;
//}


//class Solution {
//public:
//    typedef pair<int, int> PII;// id: 分数
//    static bool Cmp(PII p1, PII p2)
//    {
//        if (p1.second == p2.second)
//        {
//            return p1.first > p2.first;
//        }
//        return p1.second < p2.second;
//    }
//
//    vector<string> fun(string s)
//    {
//        vector<string> res;
//        string tmp;
//        for (auto& e : s)
//        {
//            if (e == ' ')
//            {
//                res.push_back(tmp);
//                tmp.clear();
//            }
//            else
//            {
//                tmp += e;
//            }
//        }
//        res.push_back(tmp);
//        return res;
//    }
//
//    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
//        int n = positive_feedback.size(), m = negative_feedback.size();
//        unordered_map<string, int> hash;// 单词: 分数
//        for (auto& e : positive_feedback)
//        {
//            hash[e] = 3;
//        }
//        for (auto& e : negative_feedback)
//        {
//            hash[e] = -1;
//        }
//        int p = student_id.size();
//        priority_queue<PII, vector<PII>, decltype(&Cmp)> pq(&Cmp);
//        for (int i = 0; i < p; i++)
//        {
//            int id = student_id[i];
//            vector<string>&& tmp = fun(report[i]);
//            int sorce = 0;
//            for (int j = 0; j < tmp.size(); j++)
//            {
//                sorce += hash[tmp[j]];
//            }
//            pq.push({ id, sorce });
//        }
//        vector<int> res;
//        while (k--)
//        {
//            res.push_back(pq.top().first);
//            pq.pop();
//        }
//        return res;
//    }
//};



