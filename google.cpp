#include <iostream>
using namespace std;

/*
n linii si m coloane
1 si 0
4 5
--> n log2(n)

---> n * m
x ...... 100
3 ...... 5

x/3 = 100/5
x = 100/5 *3

[1 1 1 0 0] -> 60% -> 1

[1 1 0 0 0] -> 40% -> 2

[1 0 0 0 0] -> 20% -> 3

[1 1 1 1 1] -> 100% -> 1
*/

int lungimeSecv(int n, int m, int M[1001][1001])
{
    float prevProecentaj = 101;
    int cnt = 0, secvMax = -1;

    for (int i = 1; i <= n; ++i)
    {
        int st = 1, dr = m, pos = -1;

        while (st <= dr)
        {
            int mij = (st + dr) / 2;

            if (M[i][mij] == 1)
            {
                st = mij + 1;
                pos = mij;
            }
            else
                dr = mij - 1;
        }

        // x/3 = 100/5
        // x = 100/5 *3

        float procentaj = 1.0 * 100 / m * pos;

        if (procentaj > prevProecentaj)
            cnt++;

        if (cnt > secvMax)
            secvMax = cnt;

        prevProecentaj = procentaj;
    }

    return secvMax;
}

int main()
{

    return 0;
}
