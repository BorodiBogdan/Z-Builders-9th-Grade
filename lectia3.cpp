#include <iostream>
using namespace std;

int main()
{
    ///while
    ///for

    ///if(){ Se executa in cazul in care conditia din paranteza este satisfacuta

    ///}

    int n;

    cin >> n;

    while(n > 0){///Se executa in cazul in care conditia din paranteza este satisfacuta
        ///while-ul se executa pana cand conditia din paranteza devine falsa
        cout << n % 10 << " ";
        n = n / 10;
        ///verifica si dupa executa
    }

    cout << endl;

    do{
        cout << n % 10;
        n = n / 10;
    }while(n > 0);///face si dupa verifica



    return 0;
}
