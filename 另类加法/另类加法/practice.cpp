#include <iostream>

using namespace std;


int addAB(int A, int B) {
    while (B != 0) {
        int sum = A ^ B;
        int carry = (A & B) << 1;
        A = sum;
        B = carry;
    }
    return A;
}

int main()
{
    addAB(3, 1);
    return 0;
}