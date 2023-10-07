#include <iostream>
using namespace std;

int variabila1;///automat ia valoarea 0 --> variabila globala

int main(){
    ///variabila locala --> ia o valoare aiurea

    /////////////////////////////////////////////
    int n;///tin [-2^31, 2 ^ 31 - 1] --> 2 e 9
    long long n1;/// [-2^61, 2 ^ 61 - 1] --> 2 e 18
    bool n2;/// 1 sau 0 || true or false

    unsigned int n3; /// [0, 2 ^ 32 - 1]
    unsigned long long n4;/// [ 0, 2 ^ 62 - 1]
    /////////////////////////////////////////////

    float n5;///putem calcula cu virgula --> 6 cifre dupa virgula
    double n6;/// putem calcula cu virgula --> 12 cifre dupa virgula --> mai precis

    int test = 5;
    float test_virgula = 5;

    /// + - * / %
    /// % --> restul impartirii

    ///int nr locatari; !!nu se poate declara o variabila cu spatiu
    ///int 1n; niciodata nu punem o cifra in fata numelui variabilei
    
    int nr_locatari;

    cout << 5 % 80;///iesire(output)

    return 0;
}
