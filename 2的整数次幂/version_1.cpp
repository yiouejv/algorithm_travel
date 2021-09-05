#include<iostream>
#include<assert.h>
using namespace std;


bool IsPowerOf2(int n) {
    int i = 1;

    while (i <= n) {
        if (i == n) {
            return true;
        }
        i *= 2;
    }
    return false;
}


int main(int argc, char const *argv[])
{
    assert( IsPowerOf2(2) );
    assert( IsPowerOf2(4) );
    assert( IsPowerOf2(8) );
    assert( IsPowerOf2(16) );
    assert( IsPowerOf2(1) );
    assert( IsPowerOf2(11) == false );
    assert( IsPowerOf2(5) == false );
    assert( IsPowerOf2(-5) == false );
    assert( IsPowerOf2(0) == false );
    return 0;
}