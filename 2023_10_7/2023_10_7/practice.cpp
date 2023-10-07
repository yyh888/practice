//class StockSpanner {
//public:
//    typedef pair<int, int> PII;
//    int idx = -1;
//    stack<PII> st;
//
//    StockSpanner() {
//        st.push({ INT_MAX, -1 });
//    }
//
//    int next(int price) {
//        while (price >= st.top().first) st.pop();
//        int ans = ++idx - st.top().second;
//        st.push({ price, idx });
//        return ans;
//    }
//};


