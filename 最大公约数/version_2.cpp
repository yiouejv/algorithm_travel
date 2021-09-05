#include<iostream>
#include<assert.h>
using namespace std;

int GreatestCommonDivisor(int num1, int num2) {
    if (num1 <= 0 || num2 <= 0) {
        return -1;
    }
    int big = num1 > num2 ? num1 : num2;
    int small = num1 < num2 ? num1 : num2;

    if (big % small == 0) {
        return small;
    }

    return GreatestCommonDivisor(big % small, small);
}


int main(int argc, char const *argv[])
{
    assert(GreatestCommonDivisor(10, 5) == 5);
    assert(GreatestCommonDivisor(25, 10) == 5);
    assert(GreatestCommonDivisor(255, 3) == 3);
    assert(GreatestCommonDivisor(2, 3) == 1);
    assert(GreatestCommonDivisor(20000, 2) == 2);
    assert(GreatestCommonDivisor(100, 75) == 25);
    assert(GreatestCommonDivisor(99, 55) == 11);
    return 0;
}
