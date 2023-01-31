
#include<bits/stdc++.h>
using namespace std;
int bd, bh, bm, bs;
int ed, eh, em, es;
int d, h, m, s;
int t;

int main() {
	cin >> t;
	while (t--) {
		scanf("%dday%d:%d:%d", &bd, &bh, &bm, &bs);
		scanf("%dday%d:%d:%d", &ed, &eh, &em, &es);
		if (bd == ed) {
			int time1 = bh * 3600 + bm * 60 + bs;
			int time2 = eh * 3600 + em * 60 + es;
			cout << time2 - time1 << endl;
			continue;
		}
		else {
			int time1 = bh * 3600 + bm * 60 + bs;
			int time2 = eh * 3600 + em * 60 + es;
			int time3 = ed - bd - 1;
			time3 = time3 * 86400;
			time1 = 86400 - time1;
			cout << time1 + time2 + time3 << endl;
		}
	}
}