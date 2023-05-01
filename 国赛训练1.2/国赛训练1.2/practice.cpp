// 数正方形
//int main() {
//	int n;
//	cin >> n;
//	n--;
//	long long res = 0;
//	long long m = 1000000007;
//	// 正放
//	for (int i = 1; i <= n; i++) {
//		res += (n - i + 1) * (n - i + 1);
//		res %= m;
//	}
//	// 斜放
//	for (int i = 1; i < n; i++) {
//		for (int j = 1; j <= n - i; j++) {
//			res += (n - (i + j) + 1) * (n - (i + j) + 1);
//		}
//	}
//	cout << res << endl;
//	return 0;
//}


// 全球变暖
//#include <iostream>
//#include <string>
//#include <queue>
//using namespace std;
//
//typedef pair<int, int> PII;
//
//const int N = 1010;
//char a[N][N];
//int b[N][N];
//bool flag;
//
//void bfs(int i, int j) {
//	b[i][j] = 1;
//	queue<PII> qq;
//	qq.push({ i, j });
//	int dx[] = { 0, -1, 0, 1 };
//	int dy[] = { -1, 0, 1, 0 };
//	while (!qq.empty()) {
//		// 判断能不能剩下
//		bool isT = true;
//		PII tmp = qq.front();
//		qq.pop();
//		for (int k = 0; k < 4; k++) {
//			int x = tmp.first + dx[k], y = tmp.second + dy[k];
//			if (a[x][y] == '#' && b[x][y] == 0) {
//				qq.push({ x, y });
//				b[x][y] = 1;
//			}
//			if (a[x][y] == '.') {
//				isT = false;
//			}
//		}
//		if (isT) {
//			flag = true;
//		}
//	}
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		string s;
//		cin >> s;
//		for (int j = 0; j < n; j++) {
//			a[i][j] = s[j];
//		}
//	}
//
//	int res = 0;
//
//	for (int i = 1; i < n - 1; i++) {
//		for (int j = 1; j < n - 1; j++) {
//			if (a[i][j] == '#' && b[i][j] != 1) {
//				flag = 0;
//				bfs(i, j);
//				if (!flag)
//					res++;
//			}
//		}
//	}
//	cout << res << endl;
//	return 0;
//}


// 密码脱落
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int res;
//
//int dfs(const string& s, int l, int r, int cnt) {
//	if (l >= r)
//		return cnt;
//	if (s[l] != s[r]) {
//		return min(dfs(s, l + 1, r, cnt + 1), dfs(s, l, r - 1, cnt + 1));
//	}
//	else {
//		return dfs(s, l + 1, r - 1, cnt);
//	}
//}
//
//int main() {
//	string s;
//	cin >> s;
//	int n = s.size();
//	int cnt = dfs(s, 0, n - 1, 0);
//	cout << cnt << endl;
//	return 0;
//}

//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//int dp[1010][1010];
//
//int LSC(const string& s1, const string& s2) {
//	int n = s1.size();
//	for (int i = 0; i < n; i++) {
//		if (s1[i] == s2[0]) {
//			dp[0][i] = 1;
//		}
//		else {
//			dp[0][i] = (i == 0 ? 0 : dp[0][i - 1]);
//		}
//	}
//	for (int j = 0; j < n; j++) {
//		if (s2[j] == s1[0]) {
//			dp[j][0] = 1;
//		}
//		else {
//			dp[j][0] = (j == 0 ? 0 : dp[j - 1][0]);
//		}
//	}
//	for (int i = 1; i < n; i++) {
//		for (int j = 1; j < n; j++) {
//			if (s2[i] == s1[j]) {
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			}
//			else {
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//			}
//		}
//	}
//	return dp[n - 1][n - 1];
//}
//
//int main() {
//	string s1;
//	cin >> s1;
//	string s2(s1);
//	reverse(s2.begin(), s2.end());
//	cout << s1.size() - LSC(s1, s2) << endl;
//	return 0;
//}

