#include<iostream>
#include<assert.h>
using namespace std;


bool IsPowerOf2(int n) {
    if (n <= 0) {
        return false;
    }
    return (n & (n - 1)) == 0;
}


int main(int argc, char const* argv[])
{
    assert(IsPowerOf2(2));
    assert(IsPowerOf2(4));
    assert(IsPowerOf2(8));
    assert(IsPowerOf2(16));
    assert(IsPowerOf2(1));
    assert(IsPowerOf2(11) == false);
    assert(IsPowerOf2(5) == false);
    assert(IsPowerOf2(-5) == false);
    assert(IsPowerOf2(0) == false);
    return 0;
}