// 人数估计
//#include <iostream>
//#include <string>
//using namespace std;
//
//const int N = 25, M = 25;
//int v[N][M];
//int n, m;
//
//int cnt = 0;
//
//void dfs(int i, int j) {
//	if (i == n || j == m) {
//		cnt++;
//		return;
//	}
//	if (v[i][j] == 0) {
//		return;
//	}
//	int dx[] = { 0, 1 };
//	int dy[] = { 1, 0 };
//	if ((i > 0 && v[i - 1][j] == 1) && (j > 0 && v[i][j - 1] == 1)) {
//
//	}
//	else {
//		v[i][j] = 0;
//	}
//	for (int k = 0; k < 2; k++) {
//		int x = i + dx[k], y = j + dy[k];
//		dfs(x, y);
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	string str;
//	for (int i = 0; i < n; i++) {
//		cin >> str;
//		for (int j = 0; j < m; j++) {
//			int num = str[j] - '0';
//			if (num) {
//				v[i][j] = 1;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (v[i][j] == 1) {
//				dfs(i, j);
//			}
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}


// 完全二叉树的权值
//#include <iostream>
//#include <string>
//#include <cstdio>
//using namespace std;
//
//const int N = 1e5 + 10;
//long long a[N];
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	int level = 1;// 记录层数
//	int levelMax = 1;
//	long long Max = LONG_MIN;
//	int idx = 0;
//	int levelsize = 1;
//	while (idx < n) {
//		int tmp = 0;
//		int tmpsize = levelsize;
//		while (idx < n && levelsize) {
//			tmp += a[idx++];
//			levelsize--;
//		}
//		if (tmp > Max) {
//			levelMax = level;
//			Max = tmp;
//		}
//		levelsize = tmpsize * 2;
//		level++;
//	}
//	cout << levelMax << endl;
//	return 0;
//}


