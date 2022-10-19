#include <iostream>
using namespace std;


#include <iostream>
#include <vector>
using namespace std;


class mylist
{
public:
    mylist(int size)
        : v(new int[size + 2])
        , l(new int[size + 2])
        , r(new int[size + 2])
    {
        l[1] = 0;
        r[0] = 1;
        index = 2;
    }

    void add(int pos, int x)
    {
        v[index] = x;
        r[index] = r[pos];
        l[index] = pos;
        l[r[pos]] = index;
        r[pos] = index;
        index++;
    }

    void move(char ch, int num)
    {
        //找到需要移动的位置
        int pos = num;
        // 删除
        r[l[pos]] = r[pos];
        l[r[pos]] = l[pos];
        if (ch == 'L')
        {
            l[pos] = 0;
            r[pos] = r[0];
            l[r[0]] = pos;
            r[0] = pos;
        }
        else
        {
            l[pos] = l[1];
            r[pos] = 1;
            r[l[1]] = pos;
            l[1] = pos;
        }
    }

    void print()
    {
        for (int i = r[0]; i != 1; i = r[i])
        {
            cout << v[i] << " ";
        }
    }

private:
    int* v;
    int* l;
    int* r;
    int index;
};

int main()
{
    int N, M;
    cin >> N >> M;
    mylist list(N);
    // 放数据
    list.add(0, 1);
    for (int i = 2; i < N + 1; i++)
    {
        list.add(i, i);
    }
    // 移动
    while (M--)
    {
        char ch;
        int num;
        cin >> ch >> num;
        list.move(ch, num + 1);
    }
    list.print();
    return 0;
}

