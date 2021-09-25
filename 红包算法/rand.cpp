#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main(int argc, char const *argv[])
{
    // unsigned seed = 1;
    // srand(seed);

    unsigned seed = time(0);
    srand(seed);

    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    return 0;
}