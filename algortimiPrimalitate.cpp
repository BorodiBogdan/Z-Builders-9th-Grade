#include <iostream>
using namespace std;

int main()

{
    int n, nrdiv = 0;

    cin >> n;

    for(int d = 1; d * d <= n; ++d){
        if(n % d == 0){
            nrdiv++;

            if(n / d != d)
                nrdiv++;
        }
    }

    if(nrdiv == 2)//un nr prim are doar 2 divizori
        cout << "Numarul este prim!";
    else
        cout << "Numarul nu este prim!";
    
    cout << endl;

    bool EstePrim = true;//bool ia valori doar din intervalul [0, 1]-->1 - adevarat si 0 pt fals

    if(n == 1 || n == 0)//1 si 0 nu sunt primi
        EstePrim = false;
    
    if(n > 2 && n % 2 == 0)//daca numarul este par si nu este 2 nu este prim
        EstePrim = false;
    
    for(int d = 3; d * d <= n; d += 2)//verificam daca are vreun divizor
        if(n % d == 0)
            EstePrim = false;//daca are nu este prim
    
    if(EstePrim == true)
        cout << "Numarul este prim!";
    else
        cout << "Numarul nu este prim!";
    



    return 0;
}
