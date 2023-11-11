#include <iostream>
using namespace std;

int main()
{
    int n;//care este numarul de divizori ai lui n
    
    //c -- div cu n
    //n % c == 0
    
    cin >> n;

    int nrdiv = 0;

    for(int d = 1; d <= n; ++d)//este foarte incet ---> n pasi
        if(n % d == 0)
            nrdiv++;

    cout << nrdiv << endl;

    nrdiv = 0;
    //sqrt (n) == radical n
    //d <= sqrt(n)/()^2
    //d^2 <= n
    //d * d <= n
    
    for(int d = 1; d * d <= n; d++)//timpul este mai bun ---> fac radical din (n) pasi
        if(n % d == 0){
            nrdiv++;

            if(d != n / d)
                nrdiv++;
        }
    
    cout << nrdiv;

    return 0;
}
