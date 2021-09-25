#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cassert>
#include<queue>
#include<iomanip>
using namespace std;


class RedPackage {
private:
    queue<double> q;
    double totalMoney = 0;

public:
    RedPackage(double money, int count) {
        int peopleNum = count;
        double rawMoney = money;
        for (int i = 0; i < count - 1; ++i)
        {
            double avg = money / peopleNum;
            double m = RandRangeF(0.01, avg * 2);
            m = (int)(m * 100) / 100.0;
            money -= m;
            --peopleNum;
            q.push(m);

            totalMoney += m;
        }

        q.push(money);
        totalMoney += money;

        assert(totalMoney == rawMoney);
    }

    int RandRange(int m, int n) const {
        return (rand() / RAND_MAX) * (n - m) + m;
    }

    double RandRangeF(double m, double n) const {
        double ratio = static_cast<double>(rand()) / RAND_MAX;
        return ratio * (n - m) + m;
    }

    void Display() {
        int i = 0;
        while (!q.empty()) {
            double m = q.front();
            q.pop();
            cout << "第" << ++i << "人抢到的红包金额是: " << m << endl;
        }
    }
};


int main(int argc, char const* argv[])
{
    unsigned seed = time(0);
    srand(seed);

    RedPackage red(100, 5);
    red.Display();
    return 0;
}


