#include <fstream>
using namespace std;

ifstream fin("x.in");
ofstream fout("x.out");

int n, A[1000001];
int m, B[1000001];
int k, C[2000001]; // C are dimensiune dubla deoarece se reunesc cei doi vectori

int main()
{
    fin >> n;

    for (int i = 1; i <= n; ++i)
        fin >> A[i];

    fin >> m;

    for (int i = 1; i <= m; ++i)
        fin >> B[i];

    int i = 1, j = 1; // incepem de la primul element din fiecare vector SORTAT
    int k = 0;        // lungimea vectorului interclasat

    while (i <= n && j <= m)
    {
        if (A[i] < B[j])
        {
            // marim lungimea si adaugam elementul
            ++k;
            C[k] = A[i];
            i++;
        }
        else
        {
            // marim lungimea si adaugam elementul
            k++;
            C[k] = B[j];
            j++;
        }
    }

    while (i <= n) // in cazul in care au ramas elemente in primul vector
    {
        k++;
        C[k] = A[i];
        i++;
    }

    while (j <= m) // in cazul in care au ramas elemente in al doilea vector
    {
        k++;
        C[k] = B[j];
        j++;
    }

    for (int i = 1; i <= k; ++i) // afisam rezultatul
    {
        fout << C[i] << " ";

        if (i % 10 == 0) // endl deoarece asa cere problema
            fout << "\n";
    }

    return 0;
}
