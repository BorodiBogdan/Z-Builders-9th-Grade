#include <iostream>
using namespace std;

void schimba_coloane(int M[101][101], int col1, int col2, int nr_linii)
{
    for (int i = 1; i <= nr_linii; i++)
        M[i][col1] = M[i][col2];
}
void sterge_coloana(int M[101][101], int col, int n, int &m)
{
    for (int i = col; i < m; ++i)
        schimba_coloane(M, i, i + 1, n);

    m--;
}

int F[101];

int main()
{

    int n, m;
    int M[101][101];

    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            cin >> M[i][j];

            if (M[i][j] == 0)
                F[j] = 1;
        }

    int cnt = 0;

    for (int i = 1; i <= m; ++i)
        if (F[i] == 1)
        {
            sterge_coloana(M, i - cnt, n, m);
            cnt++;
        }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
            cout << M[i][j] << " ";

        cout << "\n";
    }

    return 0;
}
