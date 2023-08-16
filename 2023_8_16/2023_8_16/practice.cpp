#include <iostream>
#include <semaphore>
#include <vector>
#include <mutex>
#include <queue>
#include <condition_variable>
#include <thread>
using namespace std;



const int N = 10; 

class RingQueue
{
public:
private:
	vector<int> _ringqueue;
	int proidx;// 生产者
	int cumidx;// 消费者

};

int main()
{

	return 0;
}

// 阻塞队列

//const int N = 10;
//
//template <class T>
//class BlockQueue
//{
//public:
//	BlockQueue(){}
//
//	void push(T task)
//	{
//		unique_lock<mutex> lock(mtx);
//		if (_q.size() == N)
//		{
//			cv.wait(lock);
//		}
//		_q.push(task);
//		cv.notify_one();
//	}
//
//	T& pop()
//	{
//		unique_lock<mutex> lock(mtx);
//		if (_q.empty())
//		{
//			cv.wait(lock);
//		}
//		T& task = _q.front();
//		_q.pop();
//		cv.notify_one();
//		return task;
//	}
//private:
//	queue<T> _q;
//	mutex mtx;
//	condition_variable cv;
//};
//
//
//int main()
//{
//	int M = 1000;
//	BlockQueue<int> bq;
//	srand((unsigned int)time(0));
//	thread t1([&]() {
//		for (int i = 0; i < M; i++)
//		{
//			int task = rand() % 1000;
//			bq.push(task);
//			cout << "生产数据: " << task << endl;
//		}
//		});
//	thread t2([&]() {
//		for (int i = 0; i < M; i++)
//		{
//			int task = bq.pop();
//			cout << "消费数据: " << task << endl;
//		}
//		});
//	t1.join();
//	t2.join();
//	return 0;
//}


//class Solution {
//public:
//    ListNode* swapPairs(ListNode* head) {
//        if (head == nullptr || head->next == nullptr) return head;
//        ListNode* tmp = head->next;
//        head->next = swapPairs(tmp->next);
//        tmp->next = head;
//        return tmp
//    }
//};


//class Solution {
//public:
//    const int N = 1e9 + 7;
//    int numWays(int n) {
//        if (n == 0) return 1;
//        if (n <= 2) return n;
//        int a = 1, b = 2;
//        int c = 3;
//        for (int i = 3; i <= n; i++)
//        {
//            c = (a + b) % N;
//            a = b;
//            b = c;
//        }
//        return c;
//    }
//};


//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> tmp;
//
//    void dfs(int n)
//    {
//        if (n == 0)
//        {
//            res.push_back(tmp);
//            return;
//        }
//        if (n == 1)
//        {
//            tmp.push_back(1);
//            res.push_back(tmp);
//            tmp.pop_back();
//            return;
//        }
//        tmp.push_back(1);
//        dfs(n - 1);
//        tmp.pop_back();
//        tmp.push_back(2);
//        dfs(n - 2);
//        tmp.pop_back();
//    }
//
//    int numWays(int n) {
//        dfs(n);
//        for (auto& v : res)
//        {
//            for (auto& e : v)
//            {
//                cout << e << " ";
//            }
//            cout << endl;
//        }
//        return res.size();
//    }
//};



//class Solution {
//public:
//    int dfs(int n)
//    {
//        if (n <= 1) return 1;
//        return dfs(n - 1) + dfs(n - 2);
//    }
//    int numWays(int n) {
//        return dfs(n);
//    }
//};


//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int n = nums.size();
//        int idx = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] == 0)
//            {
//                swap(nums[i], nums[idx++]);
//            }
//        }
//
//        for (int i = idx; i < n; i++)
//        {
//            if (nums[i] == 1)
//            {
//                swap(nums[i], nums[idx++]);
//            }
//        }
//    }
//};


//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int n = nums.size();
//        int p0 = 0, p1 = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] == 0)
//            {
//                swap(nums[i], nums[p0]);
//                if (p0 < p1) swap(nums[i], nums[p1]);
//                p0++;
//                p1++;
//            }
//            else if (nums[i] == 1)
//            {
//                swap(nums[i], nums[p1++]);
//            }
//        }
//    }
//};''



//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        if (root == nullptr) return {};
//        vector<vector<int>> res;
//        queue<TreeNode*> qq;
//        qq.push(root);
//        int levelSize = 1;
//        int level = 1;
//        while (qq.size())
//        {
//            vector<int> v;
//            while (levelSize--)
//            {
//                TreeNode* tmp = qq.front();
//                qq.pop();
//                v.push_back(tmp->val);
//                if (tmp->left) qq.push(tmp->left);
//                if (tmp->right) qq.push(tmp->right);
//            }
//            if (level % 2 == 0)
//            {
//                reverse(v.begin(), v.end());
//            }
//            res.push_back(v);
//            level++;
//            levelSize = qq.size();
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//	int maxDepth(TreeNode* root) {
//		if (root == nullptr) return 0;
//		return max(maxDepth(root->left), maxDepth(root->right)) + 1;
//	}
//};