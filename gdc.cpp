#include <iostream>
using namespace std;

int main(){
    int a, b;//numarul nostru

    cin >> a >> b;

    while(a != b){//varianta naiva(se poate optimiza)
        if(a > b)
            a = a - b;//gcd(a, b) == gcd(a - b, b)
        else b = b - a;
    }

    while(a != 0)//aici optimizez algoritmul de mai sus
    {
        int r = b % a;
        b = a;
        a = r;
    }
    cout << b;//aici avem cel mai mare divizor omun al a si b

    return 0;//aici se termina programul
}
