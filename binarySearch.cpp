#include <iostream>
using namespace std;

// se da un sir de numere ordonate CRESCATOR!!!!
// se dau q intrebari de tipul
// exista x in sirul dat

// n --> lungimea sirului  n <= 100000
// q --> q <= 100000
// q * log2(n)

int V[1000001];

bool existaX(int V[], int n, int x)
{
    // stiu ca elemntele vectorului sunt ordonate crescator
    // returnez 1 daca exista x in V, 0 in caz contrar
    // V- > vectorul
    // n -> lungimea vectorului
    // x -> elementul cautat

    int st = 1, dr = n;

    while (st <= dr)
    {
        int mid = (st + dr) / 2;

        if (V[mid] < x)
            st = mid + 1;
        else if (V[mid] > x)
            dr = mid - 1;
        else
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n; // lungimea sirului

    for (int i = 1; i <= n; ++i)
        cin >> V[i]; // este ordonat crescator

    int q, x;
    cin >> q; // numarul de intreabri

    while (q--) // aici raspundem la intrebari
    {
        cin >> x; // elementul cautat

        if (existaX(V, n, x))
            cout << "DA\n";
        else
            cout << "NU\n";
    }
    return 0;
}
