//774 Pbinfo
#include <iostream>
using namespace std;

int n,m,a[101][101];

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
            cin >> a[i][j];
    
    for(int i = n ; i >= 1 ; i --)
    {
        //verificăm dacă a[i][1] este număr prim
        bool prim = true;
        int x = a[i][1];
        if(x < 2)
            prim = false;
        if(x > 2 && x % 2 == 0)
            prim = false;
        for(int d = 3 ; d * d <= x && prim ; d += 2)
            if(x % d == 0)
                prim = false;
        if(prim)
        {
            // daca a[i][1] este prim, eliminam linia i
            for(int k = i ; k < n ; k ++)
                for(int j = 1 ; j <= m ; j ++)
                    a[k][j] = a[k+1][j];
            n --;
        }
    }
    
    for(int i = 1 ; i <= n ; ++i)
    {
        for(int j = 1 ; j <= m ; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
