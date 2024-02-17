#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("x.in");
ofstream fout("x.out");

int main()
{
    int n;
    // sa afisam descompunerea in factori primi a numarului

    fin >> n; // numarul pe care il descompunem

    int d = 2; // primul numar la care incercam sa impartim

    while (n > 1) // executam instrcutiunile pana nr ajunge la 1(nu se mai poate imparti)
    {
        if (n % d == 0) // am gasit un divizor(care e nr prim)
        {
            fout << d << "^"; // afisam divizorul

            int e = 0;         // aici tinem minte puterea din descompunere
            while (n % d == 0) // impartim de cate ori putem
            {
                n = n / d;
                e++;
            }
            fout << e << " * ";
            // impartim numarul de cate ori se poate
        }
        else
            d++; // cautam urmatorul n-prim din desc.

        if (d * d > n && n != 1) // n este nr prim(nu are rost sa mai tot cautam urmatorul nr prim la care se imparte)
        {
            fout << n << "^" << 1;
            // n este numar prim
            n = 1;
        }
    }

    return 0;
}
